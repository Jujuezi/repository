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

private slots:
    void on_btnCancel_clicked();

private:
    Ui::sell *ui;
};

#endif // SELL_H
