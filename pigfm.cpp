#include "pigfm.h"

class whitePig:public pigfm
{
public:
    whitePig()
    {
        num++;
    }
    void weightAdd(){weight++;}
    void priceAdd(){price+=100;}


private:

    int num=0;
    int price=500;
    int weight=50;
};
