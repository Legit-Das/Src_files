#include<iostream>
using namespace std;

class point
{
    int x,y;
    
    public:
        void setpoint(int a, int b);
        void getpoint();
};

void point::setpoint(int a, int b)
{
    x=a;
    y=b;
}

void point::getpoint()
{
    cout<<"\nx value = "<<x
        <<"\ny value = "<<y<<endl;
}

int main()
{
    int a,b,c,d;
    point p1,p2;

    cout<<"\nFor object p1: ";
    cout<<"\nEnter the abscissa: ";
    cin>>a;
    cout<<"\nEnter the ordinate: ";
    cin>>b;
    p1.setpoint(a,b);

    cout<<"\nFor object p2: ";
    cout<<"\nEnter the abscissa: ";
    cin>>c;
    cout<<"\nEnter the ordinate: ";
    cin>>d;
    p2.setpoint(c,d);

    p1.getpoint();
    p2.getpoint();

    return 0;
}
