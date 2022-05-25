#ifndef BUYPIG_H
#define BUYPIG_H

#include <QWidget>



namespace Ui {
class buyPig;
}

class buyPig : public QWidget
{
    Q_OBJECT

public:
    explicit buyPig(QWidget *parent = 0);
    ~buyPig();

private slots:
    void on_horizontalSlider_valueChanged(int value);



    void on_btnBuy_clicked();

    void on_btnCancel_clicked();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::buyPig *ui;
};

#endif // BUYPIG_H
