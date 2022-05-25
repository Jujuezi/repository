#ifndef HAVE_H
#define HAVE_H

#include <QDialog>

#include <QString>
#include "game.h"




namespace Ui {
class have;
}

class have : public QDialog
{
    Q_OBJECT

public:
    explicit have(QWidget *parent = 0);
    ~have();
signals:
    void buysuccess();
private slots:
    void on_btnClose_clicked();

    void on_btnBuy_clicked();

    void CanBuy();


private:
    Ui::have *ui;
    bool buy=false;

};

#endif // HAVE_H
