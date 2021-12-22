//twostr.cpp
//string defined using array and pointer notation
#include<iostream>
using namespace std;

int main()
{
    char str1[] = "Defined as an array";
    //char *str2[] = "Defined as a pointer";    //ISO C++ forbids assigning constant strings to a string pointer
    char str11[] = "Defined as a pointer";
    char *str2 = str11;

    cout<<str1<<endl;
    cout<<str2<<endl;
    
    //str1++;           //can't do this, str1 is constant
    str2++;             //this is Ok, str2 is a pointer
    str2++;             //this is Ok, str2 is a pointer
    str2++;             //this is Ok, str2 is a pointer
    str2++;             //this is Ok, str2 is a pointer

    cout << str2 << endl;
    return 0;
}

