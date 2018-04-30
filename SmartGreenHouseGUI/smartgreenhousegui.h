#ifndef SMARTGREENHOUSEGUI_H
#define SMARTGREENHOUSEGUI_H

#include <QMainWindow>
#include <QSerialPort>
namespace Ui {
class SmartGreenHouseGUI;
}

class SmartGreenHouseGUI : public QMainWindow
{
    Q_OBJECT
public slots:
    void serialRead();

public:

    explicit SmartGreenHouseGUI(QWidget *parent = 0);
    ~SmartGreenHouseGUI();
private slots:
    void setFanSpeed();
    void callTemp();
    void updateHumiLCD(const QString);
    void updateTempLCD(const QString);
    int  combine(int,int);
    void onfanSpeedvalueChanged(int value);
    void setDisplays();
    void on_humiSpin20_valueChanged(int arg1);

    void on_humiSpin40_valueChanged(int arg1);

    void on_humiSpin60_valueChanged(int arg1);

    void on_humiSpin80_valueChanged(int arg1);

    void on_humiSpin100_valueChanged(int arg1);

    void on_tempSpin20_valueChanged(int arg1);

    void on_tempSpin40_valueChanged(int arg1);

    void on_tempSpin60_valueChanged(int arg1);

    void on_tempSpin80_valueChanged(int arg1);

    void on_tempSpin100_valueChanged(int arg1);

    void on_checkBox_toggled(bool checked);

private:
    Ui::SmartGreenHouseGUI *ui;
    QSerialPort  *Serial;
    static const qint16 arduino_mega_vendor_id = 6790;
    static const qint16 arduino_mega_product_id = 29987;
    QString arduino_mega_portName ="";
    bool arduinoisavailbel = false;
    QByteArray serialData;
    QString serialBuffer = "";
    int temp=0;
    int humi=0;
    int speed=0;
    int thresholdHumi20=40;
    int thresholdHumi40=50;
    int thresholdHumi60=70;
    int thresholdHumi80=80;
    int thresholdHumi100=90;
    int thresholdTemp20=20;
    int thresholdTemp40=22;
    int thresholdTemp60=24;
    int thresholdTemp80=26;
    int thresholdTemp100=28;
    bool onHumi=false;
    const QString procent ="%";
    const QString degrees ="C";
};

#endif // SMARTGREENHOUSEGUI_H
