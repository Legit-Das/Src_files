#include<iostream>
using namespace std;

template<class T>

float area(T l, T b)
{
    return l*b;
}

template <class T>

float area(T s)
{
    return s*s;
}

template <class T>

float area(T l, T b, T h)
{
    return 6*l*b*h;
}

template <class T1, class T2, class T3>

void area(T1 PI, T2 r, T3 h, T3 &area)
{
    area = PI*r*r*h;
}

int main()
{
    float ar;
    float len = 3.4, brd = 4.5;

    ar = area(len, brd);
    cout<<"\nArea of the rectangle : "<<ar<<endl;
    
    int l = 2, b =3, h = 5;

    int arc = area(l,b,h);
    cout<<"\nVolume of cube : "<<arc<<endl;

    int s = 10;
    int ars = area(s);
    cout<<"\nArea of square : "<<ars<<endl;

    int r = 7;
    float PI = 3.1415;
    double hei = 10.0;
    double arv;
    area(PI, r, hei,arv); 
    cout<<arv<<endl;

    return 0;
}
