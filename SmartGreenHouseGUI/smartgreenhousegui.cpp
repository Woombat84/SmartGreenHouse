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
    QTimer *timer = new QTimer(this);
   // QTimer *timer2 = new QTimer(this);
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
        qDebug()<<"serial setup";
        connect(timer, SIGNAL(timeout()), this, SLOT(callTemp()));
        //connect(timer2, SIGNAL(timeout()), this, SLOT(setFanSpeed()));
        QObject::connect(Serial, SIGNAL(readyRead()), this, SLOT(serialRead()));
        timer->start(1000);
        //timer2->start(1122);
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

//    Serial.setPortName("com6");
//    Serial.setBaudRate(QSerialPort::Baud9600);
//    Serial.setDataBits(QSerialPort::Data8);
//    Serial.setParity(QSerialPort::NoParity);
//    Serial.setStopBits(QSerialPort::OneStop);
//    Serial.setFlowControl(QSerialPort::NoFlowControl);
//    Serial.open(QIODevice::ReadWrite);
//    Serial.write("hallo");




SmartGreenHouseGUI::~SmartGreenHouseGUI()
{
    if(Serial->isOpen()){
        Serial->close();
    }
    delete ui;

}
void SmartGreenHouseGUI::callTemp(){
    if(Serial->isWritable()){
        Serial->write("t");}
}

void SmartGreenHouseGUI::setFanSpeed(){
    if(Serial->isWritable()){
        Serial->write("f");

        if(humi < 20 || temp < 10){
            Serial->write("52");
            speed = 20;
        }
        if(humi < 30 || temp < 15){
            Serial->write("77");
            speed = 30;
        }
        if(humi < 50 || temp < 17){
            Serial->write("112");
            speed = 50;
        }
        if(humi < 60 || temp < 19){
            Serial->write("200");
            speed = 70;
        }
        if(humi < 80 || temp < 21){
            Serial->write("255");
            speed = 100;
        }
        else{
            Serial->write("0");
            speed = 0;

        }
        SmartGreenHouseGUI::on_fanSpeed_valueChanged(speed);
    }
    else{
        QMessageBox::warning(this, "cannot write to arduino","sad");
    }
}


void SmartGreenHouseGUI::serialRead(){

   //qDebug<< "Serial does work!"; //debugging

   QStringList bufferSplit = serialBuffer.split(",");
   if(bufferSplit.length()< 3){
       serialData = Serial->readAll();
       serialBuffer += QString::fromStdString(serialData.toStdString());
   }else{
       qDebug() << bufferSplit;
       SmartGreenHouseGUI::updateTempLCD(bufferSplit[1]);
       SmartGreenHouseGUI::updateHumiLCD(bufferSplit[2]);
       serialBuffer = "";
       int temp0 = bufferSplit[1].at(0).digitValue();
       int temp1 = bufferSplit[1].at(1).digitValue();
       int humi0 = bufferSplit[2].at(0).digitValue();
       int humi1 = bufferSplit[2].at(1).digitValue();
       qDebug() << temp0 <<temp1;
       temp = SmartGreenHouseGUI::combine(temp0,temp1);
       qDebug() << temp;
       humi = SmartGreenHouseGUI::combine(humi0,humi1);
       qDebug() << humi;
       SmartGreenHouseGUI::setFanSpeed();
   }
}

void SmartGreenHouseGUI::updateTempLCD(const QString a ){

    ui->tempLcdNumber->display(a);

}

void SmartGreenHouseGUI::updateHumiLCD(const QString a ){

    ui->humiLcdNumber_2->display(a);

}

int SmartGreenHouseGUI::combine(int a, int b){
    int times =1;
    while(times <=b)
        times *=10;
    return a*times+b;
}

void SmartGreenHouseGUI::on_fanSpeed_valueChanged(int value)
{
    ui->fanSpeed->setValue(value);
}
