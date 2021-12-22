//virtpure.cpp
//pure virtual function
#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void show() = 0;
};

class Derv1: public Base
{
    public:
        void show()
        {
            cout<<"Derv1\n";
        }
};

class Derv2: public Base
{
    public:
        void show()
        {
            cout<<"Derv2\n";
        }
};

int main()
{
    //Base bad; //Not possible since Base is abstract class
    Base* arr[2];
    Derv1 dv1;
    Derv2 dv2;

    arr[0] = &dv1;
    arr[1] = &dv2;

    for(int i = 0; i<2; i++)
        arr[i] -> show();

    return 0;
}
