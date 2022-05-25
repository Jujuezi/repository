#ifndef FARMTEXT_H
#define FARMTEXT_H

#include <QDialog>
#include"game.h"
#include"pigfarm.h"
#include"sell.h"
#include"pushtype.h"
#include"buypig.h"

namespace Ui {
class farmText;
}

class farmText : public QDialog
{
    Q_OBJECT

public:
    explicit farmText(QWidget *parent = 0);
    ~farmText();
//猪类型+重量+是否能卖+距离能卖还剩多久
    QString pigType;
    int weight;
    bool Sell;
    bool ifNull;
    int sellTime;
    static int havePigNum;
    void getText();
private slots:
    void on_btnSell_clicked();

    void on_btnClose_clicked();

    void on_btnPush_clicked();

private:
    Ui::farmText *ui;
};

#endif // FARMTEXT_H
