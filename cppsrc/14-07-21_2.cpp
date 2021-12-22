#include<iostream>
using namespace std;

class Base
{
    public:
        void print()
        {
            cout<<"\nWe are in Base class";
        }

        virtual void display()
        {
            cout<<"\nBase class display";
        }
};

class Derived : public Base
{
    public:
        void print()
        {
            cout<<"\nWe are in derived class";
        }

        void display()
        {
            cout<<"\nDerived class display";
        }
};

int main()
{
    Base b1, *b2;
    Derived d;

    b2 = &b1;

    b2 -> print();
    b2 -> display();

    b2 = &d;

    b2 -> print();
    b2 -> display();
    
    return 0;
}
