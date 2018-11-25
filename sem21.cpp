#include<iostream>
using namespace std;

int main()
{
	int n,c=0;
	cout<<"Enter the size of array :\n";
	cin>>n;
	int A[n][n],B[n][n];
	cout<<"Enter the array element :\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			B[i][j]=A[j][i];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i][j]==B[i][j])
			c++;
		}
	}
	if(c==n*n)
	cout<<"Symmetric \n";
	else 
	cout<<"Not symmetric \n";
	return 0;
}
