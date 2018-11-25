#include <iostream>
using namespace std;
int main()
{
	int n1,n2,gcd=0;
	cout<<"enter the first number: ";
	cin>>n1;
	cout<<"enter the second number: ";
	cin>>n2;
	for(int i=1;i<n1;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			gcd=i;
		}
	}
	cout<<gcd;
	return 0;
}
