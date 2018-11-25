#include<iostream>
using namespace std;

struct node
{
	node *next;
	int info;
}*top;

class stack_ll
{
	public:
    struct node *create_node(int val);
	void push();
	void pop();
	void display();
	stack_ll()
	{
	 top=NULL;	
	} 	
};
node *stack_ll::create_node(int v)
{
	node *nptr=new node();
	if(nptr==NULL)
	{
		cout<<"Memory not located \n";
		return 0;
	}
	else
	{
		nptr->info=v;
		nptr->next=NULL;
	}
}
void stack_ll::push()
{
	node *nptr,*s;
	int n;
	cout<<"Enter the number to be pushed :\n";
	cin>>n;
	nptr=create_node(n);
	if(top==NULL)
	{
		top=nptr;
		nptr->next=NULL;
	}
	else
	{
		s=top;
		top=nptr;
		top->next=s;
	}
	cout<<"pushed sucessfully \n";
}
void stack_ll::pop()
{
	if(top==NULL)
	cout<<"stack underflow \n";
	else
	{
		cout<<"deleted element is :  "<<top->info<<"\n";
		top=top->next;
	}
}
void stack_ll::display()
{
		node *temp;
		temp=top;
		while(temp!=NULL)
			{
				cout<<temp->info<<"->";
				temp=temp->next;
			}
			cout<<"\n";
}
main()
{
	int ch;
	stack_ll s;
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
				s.push();
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
	
}
