#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 6;
	double sales[SIZE];

	cout<<"\nEnter widget sales for 6 days: ";
	for(int j=0; j<SIZE; j++)
		cin>>sales[j];
	double total=0;
	for(int j:sales)
		total += j;
	double average = total/SIZE;
	cout<<"Average = "<<average<<endl;
	return 0;
}
