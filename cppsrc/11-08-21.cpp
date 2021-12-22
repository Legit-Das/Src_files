#include<iostream>
using namespace std;

template <class T>

class Add
{
    private:
        T a,b;
    public:
        void getdata()
        {
            cout<<"\nEnter data: ";
            cin>>a>>b;
        }
        
        T sum()
        {
            T c;
            c = a + b;
            return c;
        }
};

int main()
{
    Add <int> obj1;
    Add <float> obj2;

    cout<<"\nEnter integer value: "<<endl;
    obj1.getdata();

    cout<<"\nEnter float value: "<<endl;
    obj2.getdata();
    
    cout<<"\nTotal of integers: "<<obj1.sum();
    cout<<"\nTotal of reals: "<<obj2.sum();
    return 0;
}
