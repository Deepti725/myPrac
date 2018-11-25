#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,k=1;
	cout<<"Enter the size of array : \n";
	cin>>n;
	int arr[n];
	cout<<"enter the element ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"lower triangular matrix is:  \n";
	for(int i=0;i<n;i++)
	{
		if(i==k*sqrt(n))
		{
			
			for(int j=0;j<k;j++)
			{
			    
				cout<<arr[i]<<" ";
				i++;
				
			}
			k++;
		}
	}

	
	return 0;
}
