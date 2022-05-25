#ifndef PIGFM_H
#define PIGFM_H

#include"pigfarm.h"
class pigfm
{
public:
    pigfm()=default;
    ~pigfm()=default;
    pigfm(const pigfm &)=default;
    int getPrice(){return price;}
    int getWeight(){return weight;}
protected:
    int id;

    int num=0;
    int weight;
    int price;
};
Q_DECLARE_METATYPE(pigfm);
class whitePig:public pigfm{};

#endif // PIGFM_H
