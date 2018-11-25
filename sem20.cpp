#include<iostream>
using namespace std;


int main()
{
	
	int n;
	cout<<"enter the size of array ";
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		cout<<"enter the  element \n";
		cin>>arr[i][j];
	}
    } 
    cout<<"The array is : \n";
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cout<<arr[i][j]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"the upper trianglular elements are : \n";
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)
			{
				cout<<arr[i][j]<<" ";
			}
			else
			cout<<" ";
		}
		cout<<"\n";
		
    }

	return 0;
}
