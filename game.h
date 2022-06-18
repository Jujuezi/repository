#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include "have.h"
#include "shop.h"
#include "pigfarm.h"
#include <QTimer>
#include <QMessageBox>
#include<QDebug>
#include"food.h"
#include"person.h"
#include<QMediaPlayer>
#include <QMediaPlaylist>
namespace Ui {
class game;
}

class game : public QMainWindow
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();
    static int pigFarmNum;//猪场数量
    static int whitePigNum;//小猪数量
    static int blackPigNum;
    static int huaPigNum;
    static int money;//钱
    static int pigFarmPrice;//猪场价格
    static bigpigfarmclass bpf;
    static wheat wt;
    static corn cn;
    static cabbage cb;
    static int numrec;//进入的猪场编号
    static Person man;
signals:
    void sendsignal();
    void canBuySignal();
private slots:
    void on_btnZhuchang1_clicked();

    void on_btnExit_clicked();

    void on_btnZhuchang2_clicked();

    void on_btnZhuchang3_clicked();

    void on_btnZhuchang4_clicked();

    void on_btnZhuchang5_clicked();

    void on_btnZhuchang6_clicked();

    void UpdatePig();
    void buySuccessUpdate();
    
    void record1Change();
    void record2Change();
    void record3Change();
    void record4Change();
    void record5Change();
    void record6Change();

    void on_btnShop_clicked();

    void on_timer_timeout();
    void cleardata();
    void pigGrowUp();
private:
    Ui::game *ui; 

    bool record1=false;//记录购买状态
    bool record2=false;
    bool record3=false;
    bool record4=false;
    bool record5=false;
    bool record6=false;

    QTimer *tt;//游戏时间
    int t=0;
    QString temp;//读取数据文本

};

#endif // GAME_H
