#include<iostream>
using namespace std;

class B;

class A
{
    friend class B;
    private:
        int x;
    public:
        void getdata()
        {
            cout<<"\nEnter the value of x: ";
            cin>>x;
        }
        void display()
        {
            cout<<"\nIn A, x= "<<x<<endl;
        }
};

class B
{
    private:
        int y;
    public:
        void getdata()
        {
            cout<<"\nEnter the value of y: ";
            cin>>y;
        }
        void display()
        {
            cout<<"\nIn B, y= "<<y<<endl;
        }

        void swap(A &a1)
        {
            int t;
            t = a1.x;
            a1.x = y;
            y = t;
        }
};

int main()
{
    A a1;
    B b1;

    a1.getdata();
    b1.getdata();

    cout<<"\nBefore swap: ";
    a1.display();
    b1.display();

    b1.swap(a1);

    cout<<"\nAfter swap: ";
    a1.display();
    b1.display();

    return 0;
}
