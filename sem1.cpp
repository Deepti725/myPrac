#include<iostream>
using namespace std;


template <class X> void search(X arr[5],X ele)
{
	int ch;
	cout<<"enter the choice \n"<<"1 for linear search \n"<<"2 for binary search \n";
	cin>>ch;
    if(ch==1)
{
cout<<"using linear search tecnique :  \n ";
int flag=0,i=0;
for( i=0;i<5;i++)
    {
    	if(arr[i]==ele)
    	{
    		flag++;		
    		break;
    
		}
	}
		if(flag==1)
		cout<<"Element is found at position :  "<<i<< " \n";
		else
		cout<<"Value not found \n";
	}
	else
	{
		int lb=0,ub=4,mid=0,flag=0;
	cout<<"using binary search technique : \n";	
    	for(int i=0;i<5;i++)
	{
		for(int j=1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				X temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	while(lb<=ub)
	{ 
	    mid=(lb+ub)/2;
		if(arr[mid]<ele)
		lb=mid+1;
		if(arr[mid]>ele)
		ub=mid-1;
		if(arr[mid]==ele)
		{
			flag++;
			break;
		}
	}
	if(flag==1)
	cout<<"Element is found at position "<<"\n";
	else
	cout<<"not found \n";
	}	
		
		
}	

int main()
{
	int a[5]={12,3,4,5,6};
	double b[5]={2.3,3.4,2.6,2.1,3.4};
	float f[5]={3.4,1.2,4.5,7.3,5.6};
	
	search(a,6);
	search(b,3.4);
	search(f,66.5f);
	return 0;
}
