#include<iostream>
using namespace std;

void iterfact(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	cout<<"FACTORIAL OF THE NUMBER IS "<<fact;
}   

int recurfact(int num)
{
	int fact;	
	if(num>=1)
	{
	fact =num* (recurfact(num-1));
	return fact;
	}      
	else
	{
		return 1;
	}
	
	
}
int main()
{
	int num,choice,fact;
	cout<<"FACTORIAL OF A NUMBER "<<endl;
	cout<<"enter the number "<<endl;
	cin>>num;
	cout <<"enter 1 for using iteration "<<endl;
	cout<<"enter 2 for using recurrsion"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
		iterfact(num);
	}
	else if(choice==2)
	{
	  fact=	recurfact(num);
		cout<<"FACTORIAL OF "<<num<<"  IS "<<fact;
	}
	else
	{
		cout<<"wrong choice  ";
	}
}
