#include<iostream>
using namespace std;
class base
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void input()
        {
            cout<<"Enter the value of x,y,z : ";
            cin>>x>>y>>z;
        }
        void display()
        {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }
};

class derive:protected base
{
    private:
        int k;
    public:
        void input_derive()
        {
            input();
            cout<<"Enter the value of K : ";
            cin>>k;
        }
        void display_derive()
        {
            display();
            int s=y+z+k;
            cout<<"Total = "<<s<<endl;
        }
};

class derive1:public derive
{
    public:
        void get()
        {
            input_derive();
            display_derive();
        }
};

int main()
{
    derive1 obj;
    derive obj1;
    obj.get();
    obj1.input_derive();
    // obj.display();
    obj1.display_derive();
    return 0;
}

