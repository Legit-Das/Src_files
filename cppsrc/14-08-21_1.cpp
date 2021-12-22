#include<iostream>
using namespace std;

template<class T>

void swp(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int i1=5, i2=7;
    float f1=10.5, f2=5.8;
    char c1='a', c2='f';
    
    cout<<"\nEnter two integers: "; cin>>i1>>i2;
    cout<<"\nEnter two floats: "; cin>>f1>>f2;
    cout<<"\nEnter two chars: "; cin>>c1>>c2;
    
    swp(i1, i2);
    swp(f1, f2);
    swp(c1, c2);
    
    cout<<"\nAfter swpping: ";
    cout<<"\ni1 = "<<i1<<" i2 = "<<i2;
    cout<<"\nf1 = "<<f1<<" f2 = "<<f2;
    cout<<"\nc1 = "<<c1<<" c2 = "<<c2;

    return 0;
}

