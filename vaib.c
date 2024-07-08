#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* Create()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data (-1 for no Node): ");
    scanf("%d",&newnode->data);
    if(newnode->data==-1)
    {
        return 0;
    }
    printf("\nEnter the Left Child of %d: \n",newnode->data);
    newnode->left=Create();
    printf("\nEnter the Right Child of %d: \n",newnode->data);
    newnode->right=Create();
    return newnode;
}
void PreOrder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    printf("%d->",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

int main()
{
    struct node *root=0;
    root=Create();
    printf("\nPreorder Traversal is: ");
    PreOrder(root);
    
    
}