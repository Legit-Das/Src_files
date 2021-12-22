#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:

        Complex()
        {}

        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }


        Complex add(Complex t)
        {
            Complex a;

            a.real = real + t.real;
            a.imag = imag + t.imag;

            return a;
        }
        
        

        void display()
        {
            cout<<"\n"<<real<<"+i"<<imag;
        }
};

int main()
{
    Complex c1(5,9), c2(6,7), c3;

    c3 = c1.add(c2);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
