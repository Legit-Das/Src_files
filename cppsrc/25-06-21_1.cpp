
#include <iostream>
using namespace std;
class array
{
    private:
        int a[10];
        int n;
    public:
        array()
        {
            for(int i=0;i<10;i++)
            {
                a[i]=0;
            }
            n=0;
        }
        array(int x)
        {
            n=x;
            cout<<"Enter the array element:";
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
        }
        void display()
        {
            cout<<"\nThe array elements:";
            for(int i=0;i<n;i++)
            {
                cout<<" "<<a[i];
                
            }
            
        }
        array operator + (array);
};
array array:: operator + (array a1)
{
    array t ;
    t.n=a1.n;
    for(int i=0;i<t.n;i++)
    {
        t.a[i]=a[i]+a1.a[i];
        
    }
    return t;
    
}

int main() 
{
    int n ;
    cout<<"\nEnter the size of the array:";
    cin>>n;
    array a1(n),a2(n),a3;
    a3=a1+a2;
    a3.display();
    cout<<endl;
    return 0;
}
