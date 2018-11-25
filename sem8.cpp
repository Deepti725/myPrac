#include<iostream>
using namespace std;

class cqueue
{
    public:
	int front,rear,cap,arr[];
	void push(int val);
	void pop();
	void display();
	cqueue()
	{
	int arr[cap];
	front=-1;
	rear=-1;	
	}	
};
void cqueue::push(int val)
{
	if((rear==(cap-1)&&front==0)||(front==rear+1))
	cout<<"Stack overflow \n";
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		arr[rear]=val;
	}
	else
	{
	arr[rear]=val;
	rear=(rear+1)%cap;
    }
}
void cqueue::pop()
{
	if(front==-1&&rear==-1)
	cout<<"Queue underflow \n";
	else if(front==rear)
	{
		cout<<"Deleted element is :\n"<<arr[front]<<"\n";
		front=-1;
		rear=-1;
	}
	else
	{
	cout<<"Deleted element is  "<<arr[front]<<"\n";
	front=(front+1)%cap;
    }
}
void cqueue::display()
{
	if(front==-1&&rear==-1)
	cout<<"Queue underflow \n";
	else
	{
		cout<"Queue is :\n";
		for(int i=front;i<=rear;i++)
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
	cqueue s;
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
