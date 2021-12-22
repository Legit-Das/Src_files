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

int main()
{
    test loc_obj1(3);
    
    cout<<"\nThis is main";

    test loc_obj2(4);

    cout<<endl;
    return 0;
}

test glob_obj3(5);//always executed before local onjects, no matter if declared after main
