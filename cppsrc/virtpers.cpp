//virtpers.cpp
//virtual functions with person class
#include<iostream>
using namespace std;

class person
{
    protected:
        char name[40];
    public:
        void getName()
        {
            cout<<"    Enter name: ";
            cin.get(name,40);
        }

        void putName()
        {
            cout<<"Name is: "<<name<<endl;
        }

        virtual void getData() =0;
        virtual bool isOutstanding() =0;
};

class student: public person
{
    private:
        float gpa;
    public:
        void getData()
        {
            person::getName();
            cout<<"    Enter stuent's GPA: ";
            cin>>gpa;
        }
        bool isOutstanding()
        {
            return (gpa>3.5)?true:false;
        }
};

class professor: public person
{
    private:
        int numPubs;
    public:
        void getData()
        {
            person::getName();
            cout<<"    Enter number of professor's publications: ";
            cin>>numPubs;
        }

        bool isOutstanding()
        {
            return (numPubs>100)?true:false;
        }
};

int main()
{
    person* persPtr[100];
    int n = 0;
    char choice;

    do
    {
        cout<<"Enter student or professor (s/p): ";
        cin>>choice;
        if(choice == 's')
            persPtr[n] = new student;
        else if(choice == 'p')
            persPtr[n] = new professor;
        else
            cout<<"    Please enter proper choice.";

        persPtr[n++] -> getData();
        cout<<"    Enter another (y/n)? ";
        cin>>choice;
    }while(choice == 'y');

    for(int i = 0; i < n; i++)
    {
        persPtr[i] -> putName();
        
        if(persPtr[i] -> isOutstanding())
            cout<<"    This person is outstanding.\n";
    }

    return 0;
}
