#include<iostream>
using namespace std;

class student
{
    protected:
        int roll;
        char name[30];
        char dept[20];
    public:
        void input_student()
        {
            cout << "Enter the roll, name , dept: ";
            cin >> roll >> name >> dept;
        }
        void display_student()
        {
            cout << "\nName = " << name;
            cout << "Roll = " << roll;
            cout << "Department = " << dept << endl;
        }
};

class marks
{
    protected:
        int phy,chem,math;
        char sem[10];
    public:
        void input_marks()
        {
            cout << "\nEnter the marks:";
            cin >> phy >> chem >> math;
            cout << "\nEnter the semester:";
            cin >> sem;
        }

        void display_marks()
        {
            cout<< "\nMarks are as follows:\n"
                << "\nPhysics : " << phy
                << "\nChemistry : " << chem
                << "\nMathematics: " <<math
                << "\nSemester : " << sem;
        }
};

class result:public student,public marks
{
    private:
        float avg;
    public:
        void display()
        {
            avg = (phy+chem+math)/3.0;
            display_student();
            display_marks();
            cout << "\nAverage = " << avg << endl;
        }
};

int main()
{
    result r;
    r.input_student();
    r.input_marks();
    r.display();

    return 0;
}
