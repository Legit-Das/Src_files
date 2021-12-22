#include<iostream>                  
using namespace std;
#include<cstring>

class String
{
    private:
        char a[50];
    public:
        void input()
        {
            cout<<"\nEnter your string: ";
            cin.getline(a,50);
        }
        void display()
        {
            cout<<a;
        }
        String operator +(String c)
        {
            String t;
            strcpy(t.a,a);
            strcat(t.a," ");
            strcat(t.a,c.a);
            return t;
        }
};

int main()
{
    String s1,s2,s3;
    s1.input();
    s2.input();
    s3 = s1 + s2;
    s3.display();
    cout<<endl;
    return 0;
}
