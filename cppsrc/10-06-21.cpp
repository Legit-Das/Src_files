#include<iostream>
#include<cstring>
using namespace std;

class marks
{
    protected:
        int m[3];
    public:
        marks(int m1, int m2, int m3)
        {
            m[0] = m1;
            m[1] = m2;
            m[2] = m3;
        }

        ~marks()
        {   cout<<"End of onject"<<endl;}

        int total()
        {
            return m[0]+m[1]+m[2];
        }
};

class student
{
    protected:
        int roll;
        char name[20];
        char course[30];

    public:
        student(int r, char* n, char* c)
        {
            roll =r;
            strcpy(name, n);
            strcpy(course, c);
        }

        ~student()
        {
            cout<<"End of Object 2"<<endl;
        }

        int getroll()
        {
            return roll;
        }
        char* getname()
        {
            return name;
        }
        char* getcourse()
        {
            return course;
        }
};

class result: public student, public marks
{
    public:
        result(int r, char *n, char *c, int m1, int m2, int m3):student(r,n,c),marks(m1,m2,m3)
        {
            cout<<"Derived onject created"<<endl;
        }

        ~result()
        {
            cout<<"Final object destroyed"<<endl;
        }
        void display()
        {
            cout<<"\nRoll no= "<<getroll();
            cout<<"\nName = "<<getname();
            cout<<"\nTotal = "<<total()<<endl;
        }
};

int main()
{
    int r, m1, m2,m3;
    char n[20],c[30];
    
    cout<<"Enter name:";
    cin.getline(n,20);

    cout<<"Enter Course:";
    cin.getline(c,30);

    cout<<"Enter 3 marks:";
    cin>>m1>>m2>>m3;

    result rt(r,n,c,m1,m2,m3);

    rt.display();
    return 0;
}
