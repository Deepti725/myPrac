#include <stdio.h>
#include<stdlib.h>
#include<math.h>
 
 int max(int num1,int num2)
 {
 	if(num1>num2) return num1;
 	else
 	return num2;
 }
/* A binary tree node has data, pointer to left child 
   and a pointer to right child */
struct node 
{
    int data;
    struct node* lp;
    struct node* rp;
};
 
/* Function to get the count of leaf nodes in a binary tree*/
 int numLeaf(struct node* node)
{
  if(node == NULL)       
    return 0;
  if(node->lp == NULL && node->rp==NULL)      
    return 1;            
  else
    return numLeaf(node->lp)+
           numLeaf(node->rp);      
}
 int numInt(struct node* node)
{
  if(node == NULL)       
    return 0;
  if(node->lp == NULL && node->rp==NULL)      
    return 0;            
  else
    return (1+numLeaf(node->lp)+ numLeaf(node->rp));      
} 

 int height(struct node* node)
{
	int x,l,r;
  if(node == NULL)       
    return 0;
  if(node->lp == NULL && node->rp==NULL)      
    return 0;            
  else
  	l=height(node->lp);
  	r=height(node->rp);
  	x=max(l,r);
    return (x+1);      
}
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data) 
{
  struct node* node = (struct node*) malloc(sizeof(struct node));
  node->data = data;
  node->lp = NULL;
  node->rp = NULL;
   
  return(node);
}
 
/*Driver program to test above functions*/ 
int main()
{
  /*create a tree*/ 
  struct node *root = newNode(1);
  root->lp       = newNode(2);
  root->rp       = newNode(3);
  root->lp->lp  = newNode(4);
  root->lp->rp = newNode(5);  
   root->rp->lp  = newNode(6);
  root->rp->rp = newNode(7);   
   
  /*get leaf count of the above created tree*/
  printf("Leaf count of the tree is %d \n", numLeaf(root));
  printf(" Internal nodes of the tree are %d \n",numInt(root));
    printf(" Height of the tree is %d \n ",height(root));
 
  getchar();
  return 0;
}

  
