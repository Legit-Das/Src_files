#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "This is Base class constructor." << endl;
        }
        ~Base()
        {
            cout << "This is Base class destructor." << endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout << "This is Derived class constructor." << endl;
        }
        ~Derived()
        {
            cout << "This is Derived class destructor." << endl;
        }
};

class Subderived : public Derived
{
    public:
        Subderived()
        {
            cout << "This Subderived class constructor." << endl;
        }
        ~Subderived()
        {
            cout << "This Subderived class destructor." << endl;
        }
};

int main()
{
    Subderived sd;
    return 0;
};
