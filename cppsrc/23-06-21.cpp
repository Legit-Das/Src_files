#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex():real(0),imag(0)
        {}
        Complex(int x, int y):real(x),imag(y)
        {}

        void display()
        {
            cout<<real<<" + "<<imag<<'i';
        }
        Complex operator +(Complex c)
        {
            Complex t;
            t.real = real + c.real;
            t.imag = imag + c.imag;
            return t;
        }
};

int main()
{
    Complex c1(5,7),c2(2,4),c3;
    c3 = c1 + c2;
    c3.display();
    cout<<endl;
    return 0;
}
