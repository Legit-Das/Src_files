#include<iostream>
using namespace std;

class Frac
{
    private:
        float x;
    public:
        Frac():x(0.0)
        {}
        Frac(float f):x(f)
        {}

};

int main()
{
    cout<<4.5%4.0<<endl;
}
