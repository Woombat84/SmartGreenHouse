#include "smartgreenhousegui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartGreenHouseGUI w;
    w.show();

    return a.exec();
}
