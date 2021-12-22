#include<iostream>
using namespace std;

class Base
{
    protected:
        int x;
    public:
        Base()
        {
            x= 10;
        }

        virtual void display() = 0; //Pure virtual function

};

class Derived : public Base
{
    private:
        int y;
    public:
        Derived()
        {
            y=50;
        }

        void display()
        {
            cout<<"x = "<<x;
            cout<<"\ny = "<<y;
        }
};

int main()
{
    Base *b;
    Derived d;

    b = &d;

    b -> display();

    return 0;
}
