#ifndef FEED_H
#define FEED_H

#include <QDialog>
#include"farmtext.h"

namespace Ui {
class feed;
}

class feed : public QDialog
{
    Q_OBJECT

public:
    explicit feed(QWidget *parent = 0);
    ~feed();
signals:
    void updatePig();
private slots:
    void foodInit();
    
    void on_btnOk_clicked();

    void on_btnCancel_clicked();
    void findPig(int numRec,int rec,int combNum,int i);//猪场、猪栏、坑位、喂食类型
    bool pigExist1();
    bool pigExist2();
private:
    Ui::feed *ui;
    int foodtpye;
};

#endif // FEED_H
