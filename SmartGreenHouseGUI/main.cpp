#include "smartgreenhousegui.h"
#include <QApplication>
#include <QSerialPort>
#include <QSerialPortInfo>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartGreenHouseGUI w;

    w.setFixedSize(756,267);
    w.show();

    return a.exec();
}
