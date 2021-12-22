//newopintro
//introduces operator new
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char* str = "Idle hands are the devil's workshop.";
    int len = strlen(str);

    char *ptr;
    ptr = new char[len+1];      //set aside memory: string + '\0'

    strcpy(ptr, str);

    cout << "ptr = " << ptr << endl;
    return 0;
}
