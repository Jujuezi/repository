#ifndef SELL_H
#define SELL_H

#include <QDialog>
#include"game.h"
namespace Ui {
class sell;
}

class sell : public QDialog
{
    Q_OBJECT

public:
    explicit sell(QWidget *parent = 0);
    ~sell();
signals:
    void updatePig();
private slots:
    void on_btnCancel_clicked();
    void sellPig(int numRec,int rec,int combNum);
    void on_btnSell_clicked();
    void init(int numRec, int rec);

private:
    Ui::sell *ui;
    int price;
};

#endif // SELL_H
