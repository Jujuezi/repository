#ifndef SHOP_H
#define SHOP_H

#include <QWidget>

namespace Ui {
class shop;
}

class shop : public QWidget
{
    Q_OBJECT

public:
    explicit shop(QWidget *parent = 0);
    ~shop();



private:
    Ui::shop *ui;
};

#endif // SHOP_H
