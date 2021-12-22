//Showcases multi-level inheritence
#include<iostream>
using namespace std;

class base //Base class
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void input()
        {
            cout << "Enter the value of x,y,z : ";
            cin >> x >> y >> z;
        }
        void display()
        {
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
            cout << "z = " << z << endl;
        }
};

 class derive:protected base //First derived class
{
    private:
        int k;
    public:
        void input_derive()
        {
            input();
            cout << "Enter the value of K : ";
            cin >> k;
        }
        void display_derive()
        {
            display();
            int s = y + z + k;
            cout << "Total = " << s << endl;
        }
};

 class derive1:public derive //Derived from derived class
{                           //i.e. multi-level derivation
    public:
        void get()
        {
            input_derive();
            display_derive();
        }
};
//---------------------------------------------------------------
//main function
int main()
{
    derive obj;
    derive1 obj1;

    obj.input_derive();
    obj.display_derive();
    obj1.get();
    return 0;
}

