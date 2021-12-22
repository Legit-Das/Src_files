
#include<iostream>
using namespace std;

class test
{
    //int id;
    public:
        test(int);
}glob_obj1(1), glob_obj2(2);

test::test(int a)
{
    //id = x;
    cout<<"\nInitializing object"<<a;
}

int loc_obj()
{
    static test loc_obj1(3);//initializes only once
    
    cout<<"\nThis is loc_obj()";

    test loc_obj2(4);

    cout<<endl;
    return 0;
}

int main()
{
    cout<<"\nThis is main";

    loc_obj();
    loc_obj();
    loc_obj();
    loc_obj();


    cout<<endl;
    return 0;
}
