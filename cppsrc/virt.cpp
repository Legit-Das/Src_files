//notvirt.cpp
//functions accesse with pointers
#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void show()
        {
            cout<<"\nBase";
        }
};

class Derv1: public Base
{
    public:
        void show()
        {
            cout<<"\nDerv1";
        }
};

class Derv2: public Base
{
    public:
        void show()
        {
            cout<<"\nDerv2";
        }
};

int main()
{
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;

    ptr = &dv1;
    ptr -> show();

    ptr = &dv2;
    ptr -> show();

    return 0;
}

