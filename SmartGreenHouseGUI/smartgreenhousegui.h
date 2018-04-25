#ifndef SMARTGREENHOUSEGUI_H
#define SMARTGREENHOUSEGUI_H

#include <QMainWindow>

namespace Ui {
class SmartGreenHouseGUI;
}

class SmartGreenHouseGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit SmartGreenHouseGUI(QWidget *parent = 0);
    ~SmartGreenHouseGUI();

private:
    Ui::SmartGreenHouseGUI *ui;
};

#endif // SMARTGREENHOUSEGUI_H
