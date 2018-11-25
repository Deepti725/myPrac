#include<iostream>
using namespace std;
int fac(int n)
{
	if(n==1)
	return 1;
	else
	return fac(n-1)*n;
}
int main()
{
	int num,fact;
	cout<<"enter the number : ";
	cin>>num;
	fact=fac(num);
	cout<<fact;
	return 0;
}
