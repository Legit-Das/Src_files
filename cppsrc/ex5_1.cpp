#include<iostream>
using namespace std;

float circarea(float );

int main()
{
	float rad;

	cout<<"\nInput the radius of the circle:";
	cin>>rad;

	cout<<"\nThe area of the circle is "
		<<circarea(rad)<<endl;
	return 0;
}

float circarea(float r)
{
	const float PI = 3.14159F;

	return (PI*r*r);
}
