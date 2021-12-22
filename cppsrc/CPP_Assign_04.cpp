#include<iostream>
using namespace std;

class Calculator {
    private:
        static int x , y;

    public:
        static void set_data();
        static int add();
        static int sub();
        static int mul();
        static int div();
};
//---------------------------------------------------
//static variable and functions definitons
int Calculator::x;
int Calculator::y;

void Calculator::set_data() {
    cout << "\nEnter two integers : ";
    cin >> x >> y;
}

int Calculator::add() {
    return x+y;
}

int Calculator::sub() {
    return x-y;
}

int Calculator::mul() {
    return x*y;
}

int Calculator::div() {
    return x/y;
}
//----------------------------------------------------
//main function
int main() {
    Calculator c;

    c.set_data();

    cout<<"\nAddition result = "<<c.add()
        <<"\nSubtraction result = "<<c.sub()
        <<"\nMultiplication result = "<<c.mul()
        <<"\nDivision result = "<<c.div();
    cout<<endl;
    return 0;
}
