#include<iostream>
using namespace std;

class Student
{
    private:
        int roll;
        int marks;
    public:
        Student(int a, int b=40)
        {
            roll = a;
            marks = b;
        }
        void showStudent()
        {
            cout<<"Roll = "<<roll<<",Marks = "<<marks;
        }
};

int main()
{
    int roll, marks;
    cout<<"\nEnter roll for first student: ";
    cin>>roll;
    Student s1(roll);
    s1.showStudent();
    
    cout<<"\nEnter roll for second student: ";
    cin>>roll;
    cout<<"\nEnter marks for the second student: ";
    cin>>marks;
    Student s2(roll, marks);
    s2.showStudent();
    cout<<endl;
    return 0;
}