#ifndef PIGFARM_H
#define PIGFARM_H

#include <QWidget>

namespace Ui {
class pigFarm;
}

class pigFarm : public QWidget
{
    Q_OBJECT

public:
    explicit pigFarm(QWidget *parent = 0);
    ~pigFarm();

private:
    Ui::pigFarm *ui;
};

#endif // PIGFARM_H
