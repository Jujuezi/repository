#ifndef FARMTEXT_H
#define FARMTEXT_H

#include <QDialog>
#include"game.h"
#include"pigfarm.h"
#include"sell.h"
#include"pushtype.h"
#include"buypig.h"
#include"pig.h"
#include"feed.h"

namespace Ui {
class farmText;
}

class farmText : public QDialog
{
    Q_OBJECT

public:
    explicit farmText(QWidget *parent = 0);
    ~farmText();

    //记录每个猪栏的下标
    static int Index1_1;
    static int Index1_2;
    static int Index1_3;
    static int Index1_4;
    static int Index1_5;
    static int Index1_6;
    static int Index1_7;
    static int Index1_8;
    static int Index1_9;
    static int Index1_10;
    static int Index1_11;
    static int Index1_12;
    static int Index2_1;
    static int Index2_2;
    static int Index2_3;
    static int Index2_4;
    static int Index2_5;
    static int Index2_6;
    static int Index2_7;
    static int Index2_8;
    static int Index2_9;
    static int Index2_10;
    static int Index2_11;
    static int Index2_12;
    static int Index3_1;
    static int Index3_2;
    static int Index3_3;
    static int Index3_4;
    static int Index3_5;
    static int Index3_6;
    static int Index3_7;
    static int Index3_8;
    static int Index3_9;
    static int Index3_10;
    static int Index3_11;
    static int Index3_12;
    static int Index4_1;
    static int Index4_2;
    static int Index4_3;
    static int Index4_4;
    static int Index4_5;
    static int Index4_6;
    static int Index4_7;
    static int Index4_8;
    static int Index4_9;
    static int Index4_10;
    static int Index4_11;
    static int Index4_12;
    static int Index5_1;
    static int Index5_2;
    static int Index5_3;
    static int Index5_4;
    static int Index5_5;
    static int Index5_6;
    static int Index5_7;
    static int Index5_8;
    static int Index5_9;
    static int Index5_10;
    static int Index5_11;
    static int Index5_12;
    static int Index6_1;
    static int Index6_2;
    static int Index6_3;
    static int Index6_4;
    static int Index6_5;
    static int Index6_6;
    static int Index6_7;
    static int Index6_8;
    static int Index6_9;
    static int Index6_10;
    static int Index6_11;
    static int Index6_12;
    static int pushrec1_1;
    static int pushrec1_2;
    static int pushrec1_3;
    static int pushrec1_4;
    static int pushrec1_5;
    static int pushrec1_6;
    static int pushrec1_7;
    static int pushrec1_8;
    static int pushrec1_9;
    static int pushrec1_10;
    static int pushrec1_11;
    static int pushrec1_12;
    static int pushrec2_1;
    static int pushrec2_2;
    static int pushrec2_3;
    static int pushrec2_4;
    static int pushrec2_5;
    static int pushrec2_6;
    static int pushrec2_7;
    static int pushrec2_8;
    static int pushrec2_9;
    static int pushrec2_10;
    static int pushrec2_11;
    static int pushrec2_12;
    static int pushrec3_1;
    static int pushrec3_2;
    static int pushrec3_3;
    static int pushrec3_4;
    static int pushrec3_5;
    static int pushrec3_6;
    static int pushrec3_7;
    static int pushrec3_8;
    static int pushrec3_9;
    static int pushrec3_10;
    static int pushrec3_11;
    static int pushrec3_12;
    static int pushrec4_1;
    static int pushrec4_2;
    static int pushrec4_3;
    static int pushrec4_4;
    static int pushrec4_5;
    static int pushrec4_6;
    static int pushrec4_7;
    static int pushrec4_8;
    static int pushrec4_9;
    static int pushrec4_10;
    static int pushrec4_11;
    static int pushrec4_12;
    static int pushrec5_1;
    static int pushrec5_2;
    static int pushrec5_3;
    static int pushrec5_4;
    static int pushrec5_5;
    static int pushrec5_6;
    static int pushrec5_7;
    static int pushrec5_8;
    static int pushrec5_9;
    static int pushrec5_10;
    static int pushrec5_11;
    static int pushrec5_12;
    static int pushrec6_1;
    static int pushrec6_2;
    static int pushrec6_3;
    static int pushrec6_4;
    static int pushrec6_5;
    static int pushrec6_6;
    static int pushrec6_7;
    static int pushrec6_8;
    static int pushrec6_9;
    static int pushrec6_10;
    static int pushrec6_11;
    static int pushrec6_12;
signals:
    void commboxReady();
    void updatePig();
private slots:
    void on_btnSell_clicked();

    void on_btnClose_clicked();

    void on_btnPush_clicked();
    void getText();

    void on_btnFeed_clicked();

    void IndexInit();

private:
    Ui::farmText *ui;
    //猪类型+重量+是否能卖+距离能卖还剩多久
        QString pigType;
        int weight;
        bool Sell;
//        int sellTime;
        QTimer *tt;

};

#endif // FARMTEXT_H
