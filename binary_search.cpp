#include<iostream>
using namespace std;

int main()
{
	int n,i=1,search;
	cout<<"I=mplementing binary search "<<endl;
	cout<<"enter number of elements :";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in increasing order "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"enter element "<<i;
		cin>>arr[i];
	}
	cout<<"enter number to be searched ";
	cin>>search;
	int first=0,last=n-1,mid=(first+last)/2;
	while(i)
	{
	   	if(search>arr[mid])
		{
			first=mid+1;
			mid=(first+last)/2;
			continue;
		}
		if(search<arr[mid])
		{
			last= mid-1;
			mid =(first+last)/2;
			continue;
		}
		if(search==arr[mid])
		{
			cout<<"number found at "<<mid;
			break;
		}
	}
}
