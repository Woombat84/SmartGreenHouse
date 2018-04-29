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
#include <QtWidgets/QCheckBox>
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
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *humiSpin20;
    QSpinBox *humiSpin40;
    QSpinBox *humiSpin60;
    QSpinBox *humiSpin80;
    QSpinBox *humiSpin100;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget1;
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
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QCheckBox *checkBox;
    QLabel *label_14;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmartGreenHouseGUI)
    {
        if (SmartGreenHouseGUI->objectName().isEmpty())
            SmartGreenHouseGUI->setObjectName(QStringLiteral("SmartGreenHouseGUI"));
        SmartGreenHouseGUI->resize(669, 202);
        centralWidget = new QWidget(SmartGreenHouseGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 0, 471, 110));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tempSpin20 = new QSpinBox(widget);
        tempSpin20->setObjectName(QStringLiteral("tempSpin20"));

        horizontalLayout_5->addWidget(tempSpin20);

        tempSpin40 = new QSpinBox(widget);
        tempSpin40->setObjectName(QStringLiteral("tempSpin40"));

        horizontalLayout_5->addWidget(tempSpin40);

        tempSpin60 = new QSpinBox(widget);
        tempSpin60->setObjectName(QStringLiteral("tempSpin60"));

        horizontalLayout_5->addWidget(tempSpin60);

        tempSpin80 = new QSpinBox(widget);
        tempSpin80->setObjectName(QStringLiteral("tempSpin80"));

        horizontalLayout_5->addWidget(tempSpin80);

        tempSpin100 = new QSpinBox(widget);
        tempSpin100->setObjectName(QStringLiteral("tempSpin100"));

        horizontalLayout_5->addWidget(tempSpin100);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_5->addWidget(label_12);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        humiSpin20 = new QSpinBox(widget);
        humiSpin20->setObjectName(QStringLiteral("humiSpin20"));
        humiSpin20->setValue(0);

        horizontalLayout_7->addWidget(humiSpin20);

        humiSpin40 = new QSpinBox(widget);
        humiSpin40->setObjectName(QStringLiteral("humiSpin40"));

        horizontalLayout_7->addWidget(humiSpin40);

        humiSpin60 = new QSpinBox(widget);
        humiSpin60->setObjectName(QStringLiteral("humiSpin60"));

        horizontalLayout_7->addWidget(humiSpin60);

        humiSpin80 = new QSpinBox(widget);
        humiSpin80->setObjectName(QStringLiteral("humiSpin80"));

        horizontalLayout_7->addWidget(humiSpin80);

        humiSpin100 = new QSpinBox(widget);
        humiSpin100->setObjectName(QStringLiteral("humiSpin100"));

        horizontalLayout_7->addWidget(humiSpin100);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 0, 170, 108));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tempLcdNumber = new QLCDNumber(widget1);
        tempLcdNumber->setObjectName(QStringLiteral("tempLcdNumber"));
        tempLcdNumber->setDigitCount(3);

        horizontalLayout->addWidget(tempLcdNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        humiLcdNumber_2 = new QLCDNumber(widget1);
        humiLcdNumber_2->setObjectName(QStringLiteral("humiLcdNumber_2"));
        humiLcdNumber_2->setDigitCount(3);

        horizontalLayout_2->addWidget(humiLcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        fanSpeed = new QProgressBar(widget1);
        fanSpeed->setObjectName(QStringLiteral("fanSpeed"));
        fanSpeed->setValue(24);

        horizontalLayout_3->addWidget(fanSpeed);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(230, 120, 415, 19));
        horizontalLayout_9 = new QHBoxLayout(widget2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        checkBox = new QCheckBox(widget2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_9->addWidget(checkBox);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_9->addWidget(label_14);

        SmartGreenHouseGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SmartGreenHouseGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 21));
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
        label_4->setText(QApplication::translate("SmartGreenHouseGUI", "Thresholds settings for fan", Q_NULLPTR));
        label_5->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 20%", Q_NULLPTR));
        label_7->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 40%", Q_NULLPTR));
        label_6->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 60%", Q_NULLPTR));
        label_9->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 80%", Q_NULLPTR));
        label_8->setText(QApplication::translate("SmartGreenHouseGUI", "FanSpeed @ 100%", Q_NULLPTR));
        tempSpin20->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin40->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin60->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin80->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin100->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        label_12->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        humiSpin20->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin40->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin60->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin80->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin100->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        label_11->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
        label_10->setText(QApplication::translate("SmartGreenHouseGUI", "Monitoring of Smart Green House", Q_NULLPTR));
        label->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        label_2->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
        label_3->setText(QApplication::translate("SmartGreenHouseGUI", "Fan speed", Q_NULLPTR));
        label_13->setText(QApplication::translate("SmartGreenHouseGUI", "Check box if humidity as threshold", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SmartGreenHouseGUI", "CheckBox", Q_NULLPTR));
        label_14->setText(QApplication::translate("SmartGreenHouseGUI", "*default temperatue as thredshold", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmartGreenHouseGUI: public Ui_SmartGreenHouseGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTGREENHOUSEGUI_H
