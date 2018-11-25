#include<iostream>
using namespace std;

class stack
{
    public:
	int top,cap,arr[];
	void push(int val);
	void pop();
	void display();
	stack()
	{
	int arr[cap];
	top=-1;	
	}	
};
void stack::push(int val)
{
	if(top==(cap-1))
	cout<<"Stack overflow \n";
	else
	arr[++top]=val;
}
void stack::pop()
{
	if(top==-1)
	cout<<"Stack underflow \n";
	else
	cout<<"Deleted element is  "<<arr[top--]<<"\n";
}
void stack::display()
{
	if(top==-1)
	cout<<"Stack underflow \n";
	else
	{
		cout<"stack is :\n";
		for(int i=top;i>=0;i--)
		{
			cout<<arr[i]<<"  ";
			
		}
		cout<<"\n";
	}
}
 main()
{
	int n,ch,num;
	cout<<"Enter the size of array \n";
	cin>>n;
	stack s;
	s.cap=n;
	while(1)
	{
		cout<<"Main fuction \n";
		cout<<"1 to push \n";
		cout<<"2 to pop \n";
		cout<<"3 to display \n";
		cout<<"4 to exit \n";
		cout<<"Enter the choice \n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the number to be pushed \n";
				cin>>num;
				s.push(num);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				exit(0);
			default :
				cout<<"wrong choice \n";
				
		}
		
	}
	//return 0;
}
