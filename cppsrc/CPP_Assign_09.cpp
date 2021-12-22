#include<iostream>
using namespace std;

class Base //Base class
{
    public:
        virtual void write() //virtual fnction in base class
        {
            cout << "This is Base class." << endl;
        }
};

class Derived_1 : public Base //First derived class
{
    public:
        void write() //overwritten virtual function of base class
        {
            cout << "This is Derived_1 class." << endl;
        }
};

class Derived_2 : public Base //Second derived class
{
    public:
        void write() //overwritten virtual function if base class
        {
            cout << "This is Derived_2 class." << endl;
        }
};

int main()
{
    Base b;
    Derived_1 d1;
    Derived_2 d2;

    b.write();
    d1.write();
    d2.write();
    return 0;
}
