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
    void on_fanSpeed_valueChanged(int value);

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
};

#endif // SMARTGREENHOUSEGUI_H
