#include<iostream>
using namespace std;

int increment()
{
    //static int i=0;
    int i = 0;
    i++;
    return i;
}

int main()
{
    int v;

    v = increment();
    cout<<v<<endl;

    v = increment();
    cout<<v<<endl;

    v = increment();
    cout<<v<<endl;

    return 0;
}
