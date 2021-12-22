#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll;
        char name[30];
    public:
        void getStudent()
        {
            cout<<"\nEnter Roll: ";cin>>roll;
            cout<<"\nEnter name: ";cin>>name;
        }
        void displayStudent()
        {
            cout<<"\nName : "<<name;
            cout<<"\nRoll : "<<roll;
        }
};

class Internal : virtual public Student
{
    protected:
        int marks[3];
    public:
        void getMarks()
        {
            cout<<"\nEnter three marks: ";
            for(int i = 0; i<3; i++)
            {
                cin>>marks[i];
            }
        }

        int totalMarks()
        {
            return (marks[0]+marks[1]+marks[2]);
        }
};

class Activity : virtual public Student
{
    protected:
        int acts[2];
    public:
        void getActsScore()
        {
            cout<<"\nEnter the scores of activities: ";
            cin>>acts[0]>>acts[1];
        }

        int totalScore()
        {
            return (acts[0]+acts[1]);
        }
};

class Result : public Internal, public Activity
{
    public:
        void Display()
        {
            cout<<"\nTotal number = "<<totalMarks()+totalScore();
        }
};

int main()
{
    Result r;
    
    r.getStudent();
    r.getMarks();
    r.getActsScore();

    r.displayStudent();
    r.Display();

    return 0;
}
