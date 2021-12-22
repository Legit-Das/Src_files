#include<iostream>
using namespace std;

int volume(int x, int y, int z) //Three int arguments
{
    return x*y*z;
}

int volume(int x) //One int argument
{
    return x*x*x;
}

double volume(int x, int y) //Two int arguments
{
    return 3.14 * x * y;
}

double volume(double x) //One double argument
{
    return 3.14 * x * x;
}

int main()
{
    int v1,v2,v3,v4;

    v1 = volume(1,2,3);
    cout<<"\nThe volume of the box = "<<v1;

    v2 = volume(2);
    cout<<"\nThe volume of the cube = "<<v2;

    v3 = volume(1,2);
    cout<<"\nThe volume of the cylinder = "<<v3;

    v4 = volume(1.0);
    cout<<"\nThe volume of the sphere = "<<v4;

    return 0;

}
