//employ.cpp
//models employee database using inheritance
#include<iostream>
using namespace std;

const int LEN=80;

class employee
{
    private:
        char name[LEN];
        unsigned long number;
    public:
        void getdata()
        {
            cout<<"\nEnter last name: ";
            cin>>name;
            cout<<" Enter Number: ";
            cin>>number;
        }

        void putdata() const
        {
            cout<<"\n Name: "<<name;
            cout<<"\n Number: "<<number;
        }
};

class manager : public employee
{
    private:
        chat title[LEN];
        double dues;
    public:
        void getdata()
        {
            employee::getdata();
            cout<<" Enter title: ";
            cout<<" Enter golf club dues: ";
        }

        void putdata() const
        {
            employee::putdata();
            cout<<"\n Title: "<<title;
            cout<<"\n Golf club dues: "<<dues;
        }
};

class scientists : public employee
{
    private:
        int pubs;
    public:
        void getdata()
        {
            employee::getdata();
            cout<<" Enter numbwr of pubs: ";
            cin>>pubs;
        }
        
        void putdata() const
        {
            employee::putdata();
            cout<<"\n Number of publications: "<<pubs;
        }
};

class laborer : public employee
{
};
