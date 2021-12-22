#include<iostream>
using namespace std;

class rectangle
{
    private:
        int l,b;
    public:
        rectangle(int, int);
        int area();
};

rectangle::rectangle(int x, int y)
{
    l=x;
    b=y;
}

int rectangle::area()
{
    return l*b;
}

int main()
{
    int a1,a2;
    rectangle r1=rectangle(20,10);
    rectangle r2(50,30);
    
    a1 = r1.area();
    cout<<"\nThe area of r1 = "<<a1;

    a2 = r2.area();
    cout<<"\nthe area of r2 = "<<a2;

    return 0;
}
