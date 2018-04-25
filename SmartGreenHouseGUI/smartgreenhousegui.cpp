#include "smartgreenhousegui.h"
#include "ui_smartgreenhousegui.h"

SmartGreenHouseGUI::SmartGreenHouseGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartGreenHouseGUI)
{
    ui->setupUi(this);
}

SmartGreenHouseGUI::~SmartGreenHouseGUI()
{
    delete ui;
}
