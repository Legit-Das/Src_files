#include<iostream>
using namespace std;

int volume(int length, int width = 3, int height =4);

int main()
{
    cout<<"\nVolume = "<<volume(4,6,4);
    cout<<"\nVolume = "<<volume(4,6);
    cout<<"\nVolume = "<<volume(5);

    return 0;
}
