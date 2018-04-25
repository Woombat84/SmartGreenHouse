/********************************************************************************
** Form generated from reading UI file 'smartgreenhousegui.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTGREENHOUSEGUI_H
#define UI_SMARTGREENHOUSEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartGreenHouseGUI
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmartGreenHouseGUI)
    {
        if (SmartGreenHouseGUI->objectName().isEmpty())
            SmartGreenHouseGUI->setObjectName(QStringLiteral("SmartGreenHouseGUI"));
        SmartGreenHouseGUI->resize(400, 300);
        menuBar = new QMenuBar(SmartGreenHouseGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SmartGreenHouseGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SmartGreenHouseGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SmartGreenHouseGUI->addToolBar(mainToolBar);
        centralWidget = new QWidget(SmartGreenHouseGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SmartGreenHouseGUI->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SmartGreenHouseGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SmartGreenHouseGUI->setStatusBar(statusBar);

        retranslateUi(SmartGreenHouseGUI);

        QMetaObject::connectSlotsByName(SmartGreenHouseGUI);
    } // setupUi

    void retranslateUi(QMainWindow *SmartGreenHouseGUI)
    {
        SmartGreenHouseGUI->setWindowTitle(QApplication::translate("SmartGreenHouseGUI", "SmartGreenHouseGUI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmartGreenHouseGUI: public Ui_SmartGreenHouseGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTGREENHOUSEGUI_H
