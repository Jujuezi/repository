#ifndef PIGFARM_H
#define PIGFARM_H

#include <QDialog>
#include <game.h>
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

    static int rec;
private slots:
    void on_btnPig1_clicked();

    void on_btnPig2_clicked();

private:
    Ui::pigFarm *ui;
};

#endif // PIGFARM_H
