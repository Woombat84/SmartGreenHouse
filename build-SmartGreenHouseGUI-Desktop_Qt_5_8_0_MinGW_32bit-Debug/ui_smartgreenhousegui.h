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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartGreenHouseGUI
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
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
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *tempSpin20;
    QSpinBox *tempSpin40;
    QSpinBox *tempSpin60;
    QSpinBox *tempSpin80;
    QSpinBox *tempSpin100;
    QHBoxLayout *horizontalLayout_6;
    QLCDNumber *tempLcdDis20;
    QLCDNumber *tempLcdDis40;
    QLCDNumber *tempLcdDis60;
    QLCDNumber *tempLcdDis80;
    QLCDNumber *tempLcdDis100;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *humiSpin20;
    QSpinBox *humiSpin40;
    QSpinBox *humiSpin60;
    QSpinBox *humiSpin80;
    QSpinBox *humiSpin100;
    QHBoxLayout *horizontalLayout_8;
    QLCDNumber *humiLcdDis20;
    QLCDNumber *humiLcdDis40;
    QLCDNumber *humiLcdDis60;
    QLCDNumber *humiLcdDis80;
    QLCDNumber *humiLcdDis100;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_12;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmartGreenHouseGUI)
    {
        if (SmartGreenHouseGUI->objectName().isEmpty())
            SmartGreenHouseGUI->setObjectName(QStringLiteral("SmartGreenHouseGUI"));
        SmartGreenHouseGUI->resize(943, 241);
        centralWidget = new QWidget(SmartGreenHouseGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 181, 141));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tempLcdNumber = new QLCDNumber(widget);
        tempLcdNumber->setObjectName(QStringLiteral("tempLcdNumber"));
        tempLcdNumber->setDigitCount(3);

        horizontalLayout->addWidget(tempLcdNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        humiLcdNumber_2 = new QLCDNumber(widget);
        humiLcdNumber_2->setObjectName(QStringLiteral("humiLcdNumber_2"));
        humiLcdNumber_2->setDigitCount(3);

        horizontalLayout_2->addWidget(humiLcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        fanSpeed = new QProgressBar(widget);
        fanSpeed->setObjectName(QStringLiteral("fanSpeed"));
        fanSpeed->setValue(24);

        horizontalLayout_3->addWidget(fanSpeed);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(284, 10, 631, 156));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tempSpin20 = new QSpinBox(widget1);
        tempSpin20->setObjectName(QStringLiteral("tempSpin20"));

        horizontalLayout_5->addWidget(tempSpin20);

        tempSpin40 = new QSpinBox(widget1);
        tempSpin40->setObjectName(QStringLiteral("tempSpin40"));

        horizontalLayout_5->addWidget(tempSpin40);

        tempSpin60 = new QSpinBox(widget1);
        tempSpin60->setObjectName(QStringLiteral("tempSpin60"));

        horizontalLayout_5->addWidget(tempSpin60);

        tempSpin80 = new QSpinBox(widget1);
        tempSpin80->setObjectName(QStringLiteral("tempSpin80"));

        horizontalLayout_5->addWidget(tempSpin80);

        tempSpin100 = new QSpinBox(widget1);
        tempSpin100->setObjectName(QStringLiteral("tempSpin100"));

        horizontalLayout_5->addWidget(tempSpin100);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tempLcdDis20 = new QLCDNumber(widget1);
        tempLcdDis20->setObjectName(QStringLiteral("tempLcdDis20"));

        horizontalLayout_6->addWidget(tempLcdDis20);

        tempLcdDis40 = new QLCDNumber(widget1);
        tempLcdDis40->setObjectName(QStringLiteral("tempLcdDis40"));

        horizontalLayout_6->addWidget(tempLcdDis40);

        tempLcdDis60 = new QLCDNumber(widget1);
        tempLcdDis60->setObjectName(QStringLiteral("tempLcdDis60"));

        horizontalLayout_6->addWidget(tempLcdDis60);

        tempLcdDis80 = new QLCDNumber(widget1);
        tempLcdDis80->setObjectName(QStringLiteral("tempLcdDis80"));

        horizontalLayout_6->addWidget(tempLcdDis80);

        tempLcdDis100 = new QLCDNumber(widget1);
        tempLcdDis100->setObjectName(QStringLiteral("tempLcdDis100"));

        horizontalLayout_6->addWidget(tempLcdDis100);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        humiSpin20 = new QSpinBox(widget1);
        humiSpin20->setObjectName(QStringLiteral("humiSpin20"));
        humiSpin20->setValue(0);

        horizontalLayout_7->addWidget(humiSpin20);

        humiSpin40 = new QSpinBox(widget1);
        humiSpin40->setObjectName(QStringLiteral("humiSpin40"));

        horizontalLayout_7->addWidget(humiSpin40);

        humiSpin60 = new QSpinBox(widget1);
        humiSpin60->setObjectName(QStringLiteral("humiSpin60"));

        horizontalLayout_7->addWidget(humiSpin60);

        humiSpin80 = new QSpinBox(widget1);
        humiSpin80->setObjectName(QStringLiteral("humiSpin80"));

        horizontalLayout_7->addWidget(humiSpin80);

        humiSpin100 = new QSpinBox(widget1);
        humiSpin100->setObjectName(QStringLiteral("humiSpin100"));

        horizontalLayout_7->addWidget(humiSpin100);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        humiLcdDis20 = new QLCDNumber(widget1);
        humiLcdDis20->setObjectName(QStringLiteral("humiLcdDis20"));

        horizontalLayout_8->addWidget(humiLcdDis20);

        humiLcdDis40 = new QLCDNumber(widget1);
        humiLcdDis40->setObjectName(QStringLiteral("humiLcdDis40"));

        horizontalLayout_8->addWidget(humiLcdDis40);

        humiLcdDis60 = new QLCDNumber(widget1);
        humiLcdDis60->setObjectName(QStringLiteral("humiLcdDis60"));

        horizontalLayout_8->addWidget(humiLcdDis60);

        humiLcdDis80 = new QLCDNumber(widget1);
        humiLcdDis80->setObjectName(QStringLiteral("humiLcdDis80"));

        horizontalLayout_8->addWidget(humiLcdDis80);

        humiLcdDis100 = new QLCDNumber(widget1);
        humiLcdDis100->setObjectName(QStringLiteral("humiLcdDis100"));

        horizontalLayout_8->addWidget(humiLcdDis100);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_2);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(210, 50, 64, 91));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);

        label_11 = new QLabel(widget2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        SmartGreenHouseGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SmartGreenHouseGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 943, 21));
        SmartGreenHouseGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SmartGreenHouseGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SmartGreenHouseGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SmartGreenHouseGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SmartGreenHouseGUI->setStatusBar(statusBar);

        retranslateUi(SmartGreenHouseGUI);
        QObject::connect(humiSpin20, SIGNAL(valueChanged(int)), humiLcdDis20, SLOT(display(int)));

        QMetaObject::connectSlotsByName(SmartGreenHouseGUI);
    } // setupUi

    void retranslateUi(QMainWindow *SmartGreenHouseGUI)
    {
        SmartGreenHouseGUI->setWindowTitle(QApplication::translate("SmartGreenHouseGUI", "SmartGreenHouseGUI", Q_NULLPTR));
        label_10->setText(QApplication::translate("SmartGreenHouseGUI", "Monitoring of Smart Green House", Q_NULLPTR));
        label->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        label_2->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
        label_3->setText(QApplication::translate("SmartGreenHouseGUI", "Fan speed", Q_NULLPTR));
        label_4->setText(QApplication::translate("SmartGreenHouseGUI", "Thresholds settings for fan", Q_NULLPTR));
        label_5->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 20%", Q_NULLPTR));
        label_7->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 40%", Q_NULLPTR));
        label_6->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 60%", Q_NULLPTR));
        label_9->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 80%", Q_NULLPTR));
        label_8->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 100%", Q_NULLPTR));
        label_12->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        label_11->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmartGreenHouseGUI: public Ui_SmartGreenHouseGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTGREENHOUSEGUI_H
