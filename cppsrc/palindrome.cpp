#include<iostream>
using namespace std;

int main()
{
	int i, rev = 0, rem, num;

	cout<<"\nEnter and integer: ";
	cin>>num;

	for(i=num; i>0; i /=10)
	{
		rem = i%10;
		rev = rev*10 + rem;
	}
	
	if(rev == num)
		cout<<num<<" is Palindrome";
	else
		cout<<num<<" is not Palindrome";
	cout<<endl;
	return 0;

}
