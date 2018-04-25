#include "smartgreenhousegui.h"
#include "ui_smartgreenhousegui.h"
#include <QSerialPort>
QSerialPort Serial;

SmartGreenHouseGUI::SmartGreenHouseGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartGreenHouseGUI)
{
    ui->setupUi(this);
    Serial.setPortName("com6");
    Serial.setBaudRate(QSerialPort::Baud9600);
    Serial.setDataBits(QSerialPort::Data8);
    Serial.setParity(QSerialPort::NoParity);
    Serial.setStopBits(QSerialPort::OneStop);
    Serial.setFlowControl(QSerialPort::NoFlowControl);
    Serial.open(QIODevice::ReadWrite);
    Serial.write("hallo");


}

SmartGreenHouseGUI::~SmartGreenHouseGUI()
{
    delete ui;
    Serial.close();
}
