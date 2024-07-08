/***************************************
 
 TREE TRAVERSAL FOR BINARY TREE 

****************************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*create()
{
   int x;
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter the Data:");
   scanf("%d",&newnode->data);
   if(newnode->data==0)
   {
    return 0;
   }
else{
    printf("\nEnter the left child of %d(0 for no child):",newnode->data);
   newnode->left=create();
   printf("\nEnter the right child of %d (0 for no child): ",newnode->data);
   newnode->right=create();
return newnode;
}
}
//FUNCTION FOR PREORDER (NLR)
void preorder(struct node*root)
{
  if(root==0)
  {
    return;
  }
  printf("%d\t",root->data);
  preorder(root->left);
  preorder(root->right);
}
//FUNCTION FOR POSTORDER (LRN)
void postorder(struct node*root)
{
  if(root==0)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
   printf("%d\t",root->data);
}
//FUNCTION FOR INORDER (LRN)
void inorder(struct node*root)
{
    if(root==0)
    {
        return ;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right); 
}
int main()
{
    struct node*root;
    root=0;
   root=create();     
   //TREE TRAVERSAL PREORDER,POSTORDER,INORDER
   printf("\nPREORDER IS:\t");
   preorder(root);
   printf("\nPOSTORDER IS:\t");
   postorder(root);
   printf("\nINORDER IS:\t");
   inorder(root);
   return 0;
}
