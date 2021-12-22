#include<iostream>
using namespace std;

int main()
{
	int age[4];

	for(int i=0; i<4; i++)
	{
		cout<<"Enter an age: ";
		cin>>age[i];
	}
	for(int j:age)
	{
		cout<<"You entered "
			<<j<<endl;
	}

	return 0;
}
