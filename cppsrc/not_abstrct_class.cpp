#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void show();

        void show2()
        {
            cout<<"This is Abs base\n";
        }
};

void Base::show()
{
    cout<<"show\n";
}

int main()
{
    Base b;
    
    b.show2();
    return 0;
}
