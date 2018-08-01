#include<iostream>
#include<cstdio>
using namespace std;
/*----Function Prototypes-----*/    
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();

/*-----------------------------*/
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()      //main() starts
{
        int choice;
        int state=0;
        while(state==0){
                cout("\n***SINGLE LINKED LIST OPERATIONS:****\n");
                cout("\n        MENU              \n");
                cout("---------------------------------------\n");
                cout("\n 1.Create     \n");
                cout("\n 2.Display    \n");
                cout("\n 3.Insert at the beginning    \n");
                cout("\n 4.Insert at the end  \n");
                cout("\n 5.Insert at specified position       \n");
  
                cout("\n 9.Exit       \n");
                cout("\n--------------------------------------\n");
                cout("Enter your choice:\t");
                cin(&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        
                        case 9:
                                       state=1; 
                                        break;
                        default:
                                        cout("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
        }
        return 0;
}//end of main()
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                cout("\nOut of Memory Space:\n");
                
        }
        cout("\nEnter the data value for the node:\t");
        cin(&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}//end of create()

void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                cout("\nOut of Memory Space:\n");
                return;
        }
        cout("\nEnter the data value for the node:\t" );
        cin(&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}//end of insert_begin()
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        cout("\nEnter the data value for the node:\t" );
        cin(&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}//end of insert_end
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                cout("\nOut of Memory Space:\n");
                return;
        }
        cout("\nEnter the position for the new node to be inserted:\t");
        cin(&pos);
        cout("\nEnter the data value of the node:\t");
        cin(&temp->info) ;
 
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++)
                {
                        ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                cout("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }//end of else
}//end of insert_pos

