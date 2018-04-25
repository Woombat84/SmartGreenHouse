#include "smartgreenhousegui.h"
#include <QApplication>
#include <QSerialPort>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartGreenHouseGUI w;
    w.show();

    return a.exec();
}
