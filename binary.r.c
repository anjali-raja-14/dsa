/**************************

IMPLEMENTATION OD BINARY TREE CODE 

****************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data ;
struct node*left;
struct node*right;
};
struct node*create()
{
int x;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data:");
scanf("%d",&newnode->data);
if(newnode->data==0)
{
  return 0 ;
}
else{
  printf("\nEnter the left child of %d",newnode->data);
  newnode->left=create();
  printf("\nEnter the right child of %d",newnode->data);
  newnode->right=create();
  return newnode;
}
}
//FUNCTION FOR PREORDER 
void preorder(root)
{

}




int main()
{
  struct node*root;
  root=0;
  root=create();

}