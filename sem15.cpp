#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cout<<"Enter the size  of array :\n";
	cin>>n;
	int arr[n][n];
	cout<<"Enter the array element : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<"The array elemnts are :\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j||i>j)
			{
				if(arr[i][j]==0)
				{
					cout<<8<<" ";
				}
			}
			else
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
