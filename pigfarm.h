#ifndef PIGFARM_H
#define PIGFARM_H

#include <QDialog>
#include "game.h"
#include"farmtext.h"
namespace Ui {
class pigFarm;
}

class pigFarm : public QDialog
{
    Q_OBJECT

public:
    explicit pigFarm(QWidget *parent = 0);
    ~pigFarm();
    static int rec;//进入的猪栏编号标记
signals:
    void updatePig();
private slots:
    void on_btnPig1_clicked();

    void on_btnPig2_clicked();
    void on_btnPig3_clicked();

    void on_btnPig4_clicked();

    void on_btnPig5_clicked();

    void on_btnPig6_clicked();

private:
    Ui::pigFarm *ui;

};

#endif // PIGFARM_H
