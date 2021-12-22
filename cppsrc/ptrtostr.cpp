//ptrtostr.cpp
//an array of pointers to string
#include<iostream>
using namespace std;
const int DAYS = 7;

int main()
{
    char *arrptrs[DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i<DAYS; i++)
    {
        cout << arrptrs[i] << endl;
    }

    return 0;
}
