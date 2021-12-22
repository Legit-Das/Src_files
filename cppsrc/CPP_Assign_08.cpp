#include<iostream>
using namespace std;

class Base
{
    public:
        void write()
        {
            cout << "Write Base Class.";
        }
};

class Derived1 : virtual public Base
{
};

class Derived2 : virtual public Base
{
};

class Subderived : public Derived1, public Derived2
{
};

int main()
{
    Subderived sd;
    sd.write();
    cout<<endl;
    return 0;
}
