#include<iostream>
using namespace std;

class rectangle
{
    int x,y;
    public:
        //rectangle(int, int);
        void setvalue(int, int);
        void show();
};

/*rectangle::rectangle(int a, int b)
{
    x=a;
    y=b;
}*/

void rectangle::setvalue(int i, int j)
{
    x=i;
    y=j;
}

void rectangle::show()
{
    cout<<"\nlength = "<<x;
    cout<<"\nbreadth = "<<y;
};

int main()
{
    rectangle r1();//error: Default implicit constructor can not be used by compiler since a constructor(regardless of argument type/number) is already defined
    //rectangle r2(20,10);
    r1.setvalue(100, 50);
    r1.show();
    //r2.show();

    return 0;
}

