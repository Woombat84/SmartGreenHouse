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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartGreenHouseGUI
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *tempLcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *humiLcdNumber_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QProgressBar *fanSpeed;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmartGreenHouseGUI)
    {
        if (SmartGreenHouseGUI->objectName().isEmpty())
            SmartGreenHouseGUI->setObjectName(QStringLiteral("SmartGreenHouseGUI"));
        SmartGreenHouseGUI->resize(411, 182);
        centralWidget = new QWidget(SmartGreenHouseGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 361, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tempLcdNumber = new QLCDNumber(layoutWidget);
        tempLcdNumber->setObjectName(QStringLiteral("tempLcdNumber"));
        tempLcdNumber->setDigitCount(3);

        horizontalLayout->addWidget(tempLcdNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        humiLcdNumber_2 = new QLCDNumber(layoutWidget);
        humiLcdNumber_2->setObjectName(QStringLiteral("humiLcdNumber_2"));
        humiLcdNumber_2->setDigitCount(3);

        horizontalLayout_2->addWidget(humiLcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        fanSpeed = new QProgressBar(layoutWidget);
        fanSpeed->setObjectName(QStringLiteral("fanSpeed"));
        fanSpeed->setValue(24);

        horizontalLayout_3->addWidget(fanSpeed);


        verticalLayout->addLayout(horizontalLayout_3);

        SmartGreenHouseGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SmartGreenHouseGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 411, 21));
        SmartGreenHouseGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SmartGreenHouseGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SmartGreenHouseGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SmartGreenHouseGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SmartGreenHouseGUI->setStatusBar(statusBar);

        retranslateUi(SmartGreenHouseGUI);

        QMetaObject::connectSlotsByName(SmartGreenHouseGUI);
    } // setupUi

    void retranslateUi(QMainWindow *SmartGreenHouseGUI)
    {
        SmartGreenHouseGUI->setWindowTitle(QApplication::translate("SmartGreenHouseGUI", "SmartGreenHouseGUI", Q_NULLPTR));
        label->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        label_2->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
        label_3->setText(QApplication::translate("SmartGreenHouseGUI", "Fan speed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmartGreenHouseGUI: public Ui_SmartGreenHouseGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTGREENHOUSEGUI_H
