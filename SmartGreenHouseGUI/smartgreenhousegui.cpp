#include "smartgreenhousegui.h"
#include "ui_smartgreenhousegui.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>
#include <QTime>
SmartGreenHouseGUI::SmartGreenHouseGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartGreenHouseGUI)
{
    ui->setupUi(this);
    ui->tempLcdNumber->display("---");
    ui->humiLcdNumber_2->display("aaa");
    ui->lcdNumber->display("lll");
    QTimer *timer = new QTimer(this);

    QTimer *timer2 = new QTimer(this);

    QTimer *timer3 = new QTimer(this);

    Serial = new QSerialPort;
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()){
            if(serialPortInfo.vendorIdentifier() == arduino_mega_vendor_id){
                if(serialPortInfo.productIdentifier()== arduino_mega_product_id){
                    arduino_mega_portName = serialPortInfo.portName();
                    arduinoisavailbel = true;
                }
            }
        }
    }
    if(arduinoisavailbel){
        //open and config port
        Serial->setPortName(arduino_mega_portName);
        Serial->open(QSerialPort::ReadWrite);
        Serial->setBaudRate(QSerialPort::Baud9600);
        Serial->setDataBits(QSerialPort::Data8);
        Serial->setParity(QSerialPort::NoParity);
        Serial->setStopBits(QSerialPort::OneStop);
        Serial->setFlowControl(QSerialPort::NoFlowControl);
        //qDebug()<<"serial setup";
        SmartGreenHouseGUI::setDisplays();
        connect(timer, SIGNAL(timeout()), this, SLOT(callTemp()));
        connect(timer, SIGNAL(timeout()), this, SLOT(setLux()));
        connect(timer3, SIGNAL(timeout()), this, SLOT(setFanSpeed()));
        connect(timer2, SIGNAL(timeout()), this, SLOT(setHeatLamp()));
        QObject::connect(Serial, SIGNAL(readyRead()), this, SLOT(serialRead()));
        timer->start(1000);
        timer2->start(1000);
        timer3->start(4000);

    }
    else{
        // warring arduino not availbel
        QMessageBox::warning(this, "Cannot find arduino", "port error");
    }
}

//    qDebug() << "number of avaibel ports:" << QSerialPortInfo::availablePorts().length();
//    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
//        qDebug() << "has vendor Id:" << serialPortInfo.hasVendorIdentifier();
//        if(serialPortInfo.hasVendorIdentifier())
//        {
//            qDebug()<< "Vendor Id:" << serialPortInfo.vendorIdentifier();
//        }
//        qDebug() << "has vendor Id:" << serialPortInfo.hasProductIdentifier();
//        if(serialPortInfo.hasProductIdentifier())
//        {
//            qDebug()<< "product info:" << serialPortInfo.productIdentifier();
//        }

SmartGreenHouseGUI::~SmartGreenHouseGUI()
{
    if(Serial->isOpen()){
        Serial->close();
    }
    delete ui;

}

void SmartGreenHouseGUI::callTemp(){
    //
    SmartGreenHouseGUI::onfanSpeedvalueChanged(speed);
    if(Serial->isWritable()){
        Serial->write("t");
        //qDebug() << "temperature call done";
    }
}
void SmartGreenHouseGUI::setLux(){
    SmartGreenHouseGUI::on_heatLampProgress_valueChanged(heat);
    if(Serial->isWritable()){
        Serial->write("l");
       //qDebug() << "lux call done";
    }
}

void SmartGreenHouseGUI::setFanSpeed(){
    if(Serial->isWritable()){
        Serial->write("f");
        //qDebug() << "set fan speed";
        if(humi >= thresholdHumi20 &&humi < thresholdHumi40 && onHumi == true){
            if(Serial->isWritable()){
            Serial->write("52");
            speed = 20;
            return;
        }}
        if(humi >= thresholdHumi40 &&humi <thresholdHumi60 && onHumi == true){
             if(Serial->isWritable()){
            Serial->write("77");
            speed = 40;
            return;
        }}
        if(humi >= thresholdHumi60 &&humi <thresholdHumi80 && onHumi == true){
            Serial->write("112");
            speed = 60;
            return;
        }
        if(humi >= thresholdHumi80 && humi< thresholdHumi100 && onHumi == true){
            Serial->write("200");
            speed = 80;
            return;
        }
        if(humi >= thresholdHumi100 && onHumi == true){
            Serial->write("255");
            speed = 100;
            return;
        }
        if(onHumi == false && temp >= thresholdTemp20 && temp<thresholdTemp40){
            Serial->write("52");
            speed = 20;
            //qDebug() << "20 "<<speed;
            return;
        }
        if(onHumi == false && temp >= thresholdTemp40 && temp<thresholdTemp60){
            Serial->write("77");
            speed = 40;
            return;
        }
        if(onHumi == false && temp >= thresholdTemp60 && temp<thresholdTemp80){
            Serial->write("112");
            speed = 60;
            return;
        }
        if(onHumi == false && temp >= thresholdTemp80 && temp < thresholdTemp100){
            Serial->write("200");
            speed = 80;
            //Serial->clear();
            return;
        }
        if(onHumi == false && temp >= thresholdTemp100 ){

            speed = 100;
            Serial->write("255");
            //Serial->clear();
            return;
        }else{

            Serial->write("0");
            speed = 0;
            //Serial->clear();
            return;
        }
    }
    else{
        QMessageBox::warning(this, "cannot write to arduino","sad");
    }
    return;
}

void SmartGreenHouseGUI::setHeatLamp(){
    if(Serial->isWritable()){
        Serial->write("h");
        //qDebug() << "set heat lamp";
        if(lux >= thresholdLux20 &&lux < thresholdLux40){
            Serial->write("255");
            heat = 100;
            return;
        }
        if(lux >= thresholdLux40 &&lux <thresholdLux60){
            Serial->write("200");
            heat = 80;
            return;
        }
        if(lux >= thresholdLux60 &&lux <thresholdLux80){
            Serial->write("112");
            heat = 60;
            return;
        }
        if(lux >= thresholdLux80 &&lux< thresholdLux100){
            Serial->write("77");
            heat = 40;
            return;
        }
        if(lux >= thresholdLux100){
            Serial->write("52");
            heat = 20;
            return;
        }else{

            Serial->write("0");
            heat = 0;
            //Serial->clear();
            return;
        }

    }
    else{
        QMessageBox::warning(this, "cannot write to arduino","sad");
    }
    return;
}
void SmartGreenHouseGUI::serialRead(){

    //qDebug()<< "Serial does work!"; //debugging

    QStringList bufferSplit = serialBuffer.split(",");
    //qDebug()<< bufferSplit;
    if(bufferSplit.length()< 5){
        serialData = Serial->readAll();
        serialBuffer += QString::fromStdString(serialData.toStdString());
    }else{
        //qDebug() << bufferSplit;
        SmartGreenHouseGUI::updateTempLCD(bufferSplit[1]);
        SmartGreenHouseGUI::updateHumiLCD(bufferSplit[2]);
        SmartGreenHouseGUI::updatelcdNumber(bufferSplit[3]);
        serialBuffer = "";
        int temp0 = bufferSplit[1].at(0).digitValue();
        int temp1 = bufferSplit[1].at(1).digitValue();
        int humi0 = bufferSplit[2].at(0).digitValue();
        int humi1 = bufferSplit[2].at(1).digitValue();
<<<<<<< HEAD
        int lux0 =  bufferSplit[3].at(0).digitValue();
        int lux1 =  bufferSplit[3].at(1).digitValue();
=======
        int lux0 = bufferSplit[2].at(0).digitValue();
        int lux1 = bufferSplit[2].at(1).digitValue();
>>>>>>> 8744912edd5bd82a844a03bb86633b2a375874b7
        //qDebug() << temp0 <<temp1;
        temp = SmartGreenHouseGUI::combine(temp0,temp1);
        //qDebug() << temp;
        humi = SmartGreenHouseGUI::combine(humi0,humi1);
<<<<<<< HEAD
        lux = SmartGreenHouseGUI::combine(lux0,lux1);
        //qDebug()<< lux;
=======
        //qDebug() << temp;
        lux = SmartGreenHouseGUI::combine(lux0,lux1);
>>>>>>> 8744912edd5bd82a844a03bb86633b2a375874b7
    }

}
void SmartGreenHouseGUI::updatelcdNumber(const QString a ){
    ui->lcdNumber->display(a);
}

void SmartGreenHouseGUI::updateTempLCD(const QString a )
{
    ui->tempLcdNumber->display(a);
}

void SmartGreenHouseGUI::updateHumiLCD(const QString a )
{
    ui->humiLcdNumber_2->display(a);
}

int SmartGreenHouseGUI::combine(int a, int b)
{
    int times =1;
    while(times <=b)
        times *=10;
    return a*times+b;
}

void SmartGreenHouseGUI::onfanSpeedvalueChanged(int value)
{
    ui->fanSpeed->setValue(value);
    return;
}

void SmartGreenHouseGUI::setDisplays(){
    ui->humiSpin20->setValue(thresholdHumi20);
    ui->humiSpin40->setValue(thresholdHumi40);
    ui->humiSpin60->setValue(thresholdHumi60);
    ui->humiSpin80->setValue(thresholdHumi80);
    ui->humiSpin100->setValue(thresholdHumi100);
    ui->tempSpin20->setValue(thresholdTemp20);
    ui->tempSpin40->setValue(thresholdTemp40);
    ui->tempSpin60->setValue(thresholdTemp60);
    ui->tempSpin80->setValue(thresholdTemp80);
    ui->tempSpin100->setValue(thresholdTemp100);
    ui->luxSpin20->setValue(thresholdLux20);
    ui->luxSpin40->setValue(thresholdLux40);
    ui->luxSpin60->setValue(thresholdLux60);
    ui->luxSpin80->setValue(thresholdLux80);
    ui->luxSpin100->setValue(thresholdLux100);
}

void SmartGreenHouseGUI::on_humiSpin20_valueChanged(int arg1)
{
    thresholdHumi20 = arg1;
    //qDebug()<<thresholdHumi20;
    if(thresholdHumi20 >= thresholdHumi40 ){
        thresholdHumi40 = thresholdHumi20+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_humiSpin40_valueChanged(int arg1)
{
    thresholdHumi40 = arg1;
    if(thresholdHumi20 >= thresholdHumi40 ){
        thresholdHumi20 = thresholdHumi40-1;
    }
    if(thresholdHumi40 >= thresholdHumi60 ){
        thresholdHumi60 = thresholdHumi40+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_humiSpin60_valueChanged(int arg1)
{
    thresholdHumi60 = arg1;
    if(thresholdHumi40 >= thresholdHumi60 ){
        thresholdHumi40 = thresholdHumi60-1;
    }
    if(thresholdHumi60 >= thresholdHumi80 ){
        thresholdHumi80 = thresholdHumi60+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_humiSpin80_valueChanged(int arg1)
{
    thresholdHumi80 = arg1;
    if(thresholdHumi60 >= thresholdHumi80 ){
        thresholdHumi60 = thresholdHumi80-1;
    }
    if(thresholdHumi80 >= thresholdHumi100 ){
        thresholdHumi100 = thresholdHumi80+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_humiSpin100_valueChanged(int arg1)
{
    thresholdHumi100 = arg1;
    if(thresholdHumi80 >= thresholdHumi100 ){
        thresholdHumi80 = thresholdHumi100-1;
    }
    else{}

    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_tempSpin20_valueChanged(int arg1)
{
    thresholdTemp20 = arg1;
    if(thresholdTemp20 >= thresholdTemp40 ){
        thresholdTemp40 = thresholdTemp20+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();

}

void SmartGreenHouseGUI::on_tempSpin40_valueChanged(int arg1)
{
    thresholdTemp40 = arg1;
    if(thresholdTemp20 >= thresholdTemp40 ){
        thresholdTemp20 = thresholdTemp40-1;
    }
    if(thresholdTemp40 >= thresholdTemp60 ){
        thresholdTemp60 = thresholdTemp40+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_tempSpin60_valueChanged(int arg1)
{
    thresholdTemp60 = arg1;
    if(thresholdTemp40 >= thresholdTemp60 ){
        thresholdTemp40 = thresholdTemp60-1;
    }
    if(thresholdTemp60 >= thresholdTemp80 ){
        thresholdTemp80 = thresholdTemp60+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_tempSpin80_valueChanged(int arg1)
{
    thresholdTemp80 = arg1;
    if(thresholdTemp60 >= thresholdTemp80 ){
        thresholdTemp60 = thresholdTemp80-1;
    }
    if(thresholdTemp80 >= thresholdTemp100 ){
        thresholdTemp100 = thresholdTemp80+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_tempSpin100_valueChanged(int arg1)
{
    thresholdTemp100 = arg1;

    if(thresholdTemp80 >= thresholdTemp100 ){
        thresholdTemp80 = thresholdTemp100-1;
}
    else{}
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_checkBox_toggled(bool checked)
{
    onHumi = checked;
}



void SmartGreenHouseGUI::on_luxSpin20_valueChanged(int arg1)
{
    thresholdLux20 = arg1;
    if(thresholdLux20 >= thresholdLux40 ){
        thresholdLux40 = thresholdLux20+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_luxSpin40_valueChanged(int arg1)
{
    thresholdLux40 = arg1;
    if(thresholdLux20 >= thresholdLux40 ){
        thresholdLux20 = thresholdLux40-1;
    }
    if(thresholdLux40 >= thresholdLux60 ){
        thresholdLux60 = thresholdLux40+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_luxSpin60_valueChanged(int arg1)
{
    thresholdLux60 = arg1;
    if(thresholdLux40 >= thresholdLux60 ){
        thresholdLux40 = thresholdLux60-1;
    }
    if(thresholdLux60 >= thresholdLux80 ){
        thresholdLux80 = thresholdLux60+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_luxSpin80_valueChanged(int arg1)
{
    thresholdLux80 = arg1;
    if(thresholdLux60 >= thresholdLux80 ){
        thresholdLux60 = thresholdLux80-1;
    }
    if(thresholdLux80 >= thresholdLux100 ){
        thresholdLux100 = thresholdLux80+1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}

void SmartGreenHouseGUI::on_luxSpin100_valueChanged(int arg1)
{
    thresholdLux100 = arg1;
    if(thresholdLux80 >= thresholdLux100 ){
        thresholdLux80 = thresholdLux100-1;
    }
    else {
        }
    SmartGreenHouseGUI::setDisplays();
}



void SmartGreenHouseGUI::on_heatLampProgress_valueChanged(int value)
{
    ui->heatLampProgress->setValue(value);
    return;
}
