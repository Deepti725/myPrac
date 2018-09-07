#include<iostream>
using namespace std;

int main()
{
	int n,flag=0;
	cout<<"Implementing binary search "<<endl;
	cout<<"enter number of elements ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	
		cout<<"enter element "<<i<<":";
		cin>>arr[i];
	}
	int search;
	cout<<"enter number to be searched : ";
	cin>>search;
	for(int i=0;i<n;i++)
	{
		if (search==arr[i])
		{
			cout<<" number found at "<<i;
			flag=1;
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==0)
	cout<<"number not found";
}
