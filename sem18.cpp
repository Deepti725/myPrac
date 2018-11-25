#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=0;
	cout<<"Enter the size of array : \n";
	cin>>n;
	int arr[n];
	cout<<"enter the element ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"diagonal element are: \n";
	for(int i=0;i<n;i=i+sqrt(n)+1)
	{
		cout<<arr[i]<<"   ";
	}

	
	return 0;
}
