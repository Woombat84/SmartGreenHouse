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
#include <QtWidgets/QSpacerItem>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QSpinBox *tempSpin20;
    QSpinBox *tempSpin40;
    QSpinBox *tempSpin60;
    QSpinBox *tempSpin80;
    QSpinBox *tempSpin100;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QSpinBox *humiSpin20;
    QSpinBox *humiSpin40;
    QSpinBox *humiSpin60;
    QSpinBox *humiSpin80;
    QSpinBox *humiSpin100;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QCheckBox *checkBox;
    QLabel *label_14;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *tempLcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *humiLcdNumber_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QProgressBar *fanSpeed;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_18;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QProgressBar *heatLampProgress;
    QLabel *label_26;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_25;
    QSpinBox *luxSpin20;
    QSpinBox *luxSpin40;
    QSpinBox *luxSpin60;
    QSpinBox *luxSpin80;
    QSpinBox *luxSpin100;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmartGreenHouseGUI)
    {
        if (SmartGreenHouseGUI->objectName().isEmpty())
            SmartGreenHouseGUI->setObjectName(QStringLiteral("SmartGreenHouseGUI"));
        SmartGreenHouseGUI->resize(757, 294);
        centralWidget = new QWidget(SmartGreenHouseGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 10, 1169, 135));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_4->addWidget(label_15);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_5->addWidget(label_12);

        tempSpin20 = new QSpinBox(layoutWidget);
        tempSpin20->setObjectName(QStringLiteral("tempSpin20"));

        horizontalLayout_5->addWidget(tempSpin20);

        tempSpin40 = new QSpinBox(layoutWidget);
        tempSpin40->setObjectName(QStringLiteral("tempSpin40"));

        horizontalLayout_5->addWidget(tempSpin40);

        tempSpin60 = new QSpinBox(layoutWidget);
        tempSpin60->setObjectName(QStringLiteral("tempSpin60"));

        horizontalLayout_5->addWidget(tempSpin60);

        tempSpin80 = new QSpinBox(layoutWidget);
        tempSpin80->setObjectName(QStringLiteral("tempSpin80"));

        horizontalLayout_5->addWidget(tempSpin80);

        tempSpin100 = new QSpinBox(layoutWidget);
        tempSpin100->setObjectName(QStringLiteral("tempSpin100"));

        horizontalLayout_5->addWidget(tempSpin100);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        humiSpin20 = new QSpinBox(layoutWidget);
        humiSpin20->setObjectName(QStringLiteral("humiSpin20"));
        humiSpin20->setValue(0);

        horizontalLayout_7->addWidget(humiSpin20);

        humiSpin40 = new QSpinBox(layoutWidget);
        humiSpin40->setObjectName(QStringLiteral("humiSpin40"));

        horizontalLayout_7->addWidget(humiSpin40);

        humiSpin60 = new QSpinBox(layoutWidget);
        humiSpin60->setObjectName(QStringLiteral("humiSpin60"));

        horizontalLayout_7->addWidget(humiSpin60);

        humiSpin80 = new QSpinBox(layoutWidget);
        humiSpin80->setObjectName(QStringLiteral("humiSpin80"));

        horizontalLayout_7->addWidget(humiSpin80);

        humiSpin100 = new QSpinBox(layoutWidget);
        humiSpin100->setObjectName(QStringLiteral("humiSpin100"));

        horizontalLayout_7->addWidget(humiSpin100);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_9->addWidget(checkBox);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_9->addWidget(label_14);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_4->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 218, 221));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tempLcdNumber = new QLCDNumber(layoutWidget1);
        tempLcdNumber->setObjectName(QStringLiteral("tempLcdNumber"));
        tempLcdNumber->setDigitCount(3);

        horizontalLayout->addWidget(tempLcdNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        humiLcdNumber_2 = new QLCDNumber(layoutWidget1);
        humiLcdNumber_2->setObjectName(QStringLiteral("humiLcdNumber_2"));
        humiLcdNumber_2->setDigitCount(3);

        horizontalLayout_2->addWidget(humiLcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_11->addWidget(label_3);

        fanSpeed = new QProgressBar(layoutWidget1);
        fanSpeed->setObjectName(QStringLiteral("fanSpeed"));
        fanSpeed->setValue(24);

        horizontalLayout_11->addWidget(fanSpeed);


        verticalLayout->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(214, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_10->addWidget(label_18);

        lcdNumber = new QLCDNumber(layoutWidget1);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        heatLampProgress = new QProgressBar(layoutWidget1);
        heatLampProgress->setObjectName(QStringLiteral("heatLampProgress"));
        heatLampProgress->setValue(24);

        horizontalLayout_3->addWidget(heatLampProgress);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 140, 751, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 160, 521, 69));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_6->addWidget(label_17);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_13->addWidget(label_19);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_13->addWidget(label_20);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_13->addWidget(label_21);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_13->addWidget(label_22);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_13->addWidget(label_23);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_13->addWidget(label_24);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_25 = new QLabel(widget);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_12->addWidget(label_25);

        luxSpin20 = new QSpinBox(widget);
        luxSpin20->setObjectName(QStringLiteral("luxSpin20"));

        horizontalLayout_12->addWidget(luxSpin20);

        luxSpin40 = new QSpinBox(widget);
        luxSpin40->setObjectName(QStringLiteral("luxSpin40"));

        horizontalLayout_12->addWidget(luxSpin40);

        luxSpin60 = new QSpinBox(widget);
        luxSpin60->setObjectName(QStringLiteral("luxSpin60"));

        horizontalLayout_12->addWidget(luxSpin60);

        luxSpin80 = new QSpinBox(widget);
        luxSpin80->setObjectName(QStringLiteral("luxSpin80"));

        horizontalLayout_12->addWidget(luxSpin80);

        luxSpin100 = new QSpinBox(widget);
        luxSpin100->setObjectName(QStringLiteral("luxSpin100"));

        horizontalLayout_12->addWidget(luxSpin100);


        verticalLayout_5->addLayout(horizontalLayout_12);


        verticalLayout_6->addLayout(verticalLayout_5);

        SmartGreenHouseGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SmartGreenHouseGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 21));
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
        label_15->setText(QApplication::translate("SmartGreenHouseGUI", "Fan-speed", Q_NULLPTR));
        label_5->setText(QApplication::translate("SmartGreenHouseGUI", "@ 20% ", Q_NULLPTR));
        label_7->setText(QApplication::translate("SmartGreenHouseGUI", " @ 40%", Q_NULLPTR));
        label_6->setText(QApplication::translate("SmartGreenHouseGUI", " @ 60%", Q_NULLPTR));
        label_9->setText(QApplication::translate("SmartGreenHouseGUI", " @ 80%", Q_NULLPTR));
        label_8->setText(QApplication::translate("SmartGreenHouseGUI", " @ 100%", Q_NULLPTR));
        label_12->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        tempSpin20->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin40->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin60->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin80->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        tempSpin100->setSuffix(QApplication::translate("SmartGreenHouseGUI", "C", Q_NULLPTR));
        label_11->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
        humiSpin20->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin40->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin60->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin80->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        humiSpin100->setSuffix(QApplication::translate("SmartGreenHouseGUI", "%", Q_NULLPTR));
        label_13->setText(QApplication::translate("SmartGreenHouseGUI", "Check box if humidity as threshold", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SmartGreenHouseGUI", "CheckBox", Q_NULLPTR));
        label_14->setText(QApplication::translate("SmartGreenHouseGUI", "*default temperatue as thredshold", Q_NULLPTR));
        label_10->setText(QApplication::translate("SmartGreenHouseGUI", "Monitoring of Smart Green House", Q_NULLPTR));
        label->setText(QApplication::translate("SmartGreenHouseGUI", "Temperature", Q_NULLPTR));
        label_2->setText(QApplication::translate("SmartGreenHouseGUI", "Humidity", Q_NULLPTR));
        label_3->setText(QApplication::translate("SmartGreenHouseGUI", "Fan speed @", Q_NULLPTR));
        label_18->setText(QApplication::translate("SmartGreenHouseGUI", "Lux", Q_NULLPTR));
        label_16->setText(QApplication::translate("SmartGreenHouseGUI", "Heat Lamp @", Q_NULLPTR));
        label_26->setText(QApplication::translate("SmartGreenHouseGUI", "____________________________________________________________________________________________________________________________", Q_NULLPTR));
        label_17->setText(QApplication::translate("SmartGreenHouseGUI", "Threshold setting for heat lamp", Q_NULLPTR));
        label_19->setText(QApplication::translate("SmartGreenHouseGUI", "Heat Lamp", Q_NULLPTR));
        label_20->setText(QApplication::translate("SmartGreenHouseGUI", "@ 20%", Q_NULLPTR));
        label_21->setText(QApplication::translate("SmartGreenHouseGUI", "@ 40%", Q_NULLPTR));
        label_22->setText(QApplication::translate("SmartGreenHouseGUI", "@ 60%", Q_NULLPTR));
        label_23->setText(QApplication::translate("SmartGreenHouseGUI", "@ 80%", Q_NULLPTR));
        label_24->setText(QApplication::translate("SmartGreenHouseGUI", "@ 100%", Q_NULLPTR));
        label_25->setText(QApplication::translate("SmartGreenHouseGUI", "Lux in %", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SmartGreenHouseGUI: public Ui_SmartGreenHouseGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTGREENHOUSEGUI_H
