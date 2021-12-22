#include<iostream>
using namespace std;

class Base
{
    protected:
        int a,p;
    public:
        Base(int x, int l)
        {
            a =x;
            p=l;
        }

        virtual void display()
        {
            cout<<"\nBase value of a = "<<a;
            cout<<"\nBase value of p = "<<p;
        }

};

class Derived : public Base
{
    private:
        int b;
    public:
        Derived(int x, int y, int z) : Base(x,y) //Object slicing
        {
            b =z;
        }

        virtual void display()
        {
            cout<<"\nDerived a value = "<<a;
            cout<<"\nDerived p value = "<<p
                <<"\nDerived b value = "<<b;
        }
};

int main()
{
    Base b(5,9);
    Derived d(7,3,2);

    b = d;

    b.display();
    d.display();

    return 0;
}
