#include<iostream>
using namespace std;

template<class X> void sort(X arr[5])
{
	int ch;
	cout<<" Enter the choice \n";
	cin>>ch;
	if(ch==1)
	{
	    int temp;
	    for(int i=0;i<10;i++)
	    {
	    	for(int j=0;j<10-i;j++)
	    	{
	    		if(arr[j]>arr[j+1])
	    		{
	    			temp=arr[j];
	    			arr[j]=arr[j+1];
	    			arr[j+1]=temp;
				}
			}
		}
	    for(int k=0;k<10;k++)
	    cout<<arr[k]<<"  ";
	    
	}
	else
	{
	int temp;
	for(int i=0;i<9;i++)
	{
	for(int j=0;j<8;j++)
	{
	if(arr[j]>arr[j+1])
	{
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;	
	}	
	}	
	}	
	}
	for(int k=0;k<10;k++)
	cout<<arr[k]<<" ";
}
int main()
{
	int a[10]={12,3,4,5,6,5,23,87,23};
	double b[10]={2.3,3.4,2.6,2.1,3.4,5.3,2.9,6.5,1.3,7.2};
	float f[10]={3.4,1.2,4.5,7.3,5.6,2.2,8.3,3.2,81.2,3.9};
	
	sort(a);
	sort(b);
	sort(f);
}
