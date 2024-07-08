/**************************************

GENERALISE CODE FOR SINGLY LINKED LIST 

**************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
int data;
struct node*next;
    };
struct node*head,*newnode,*temp;
head=0; 
int choice;
int count=0;
do
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the Data:");
 scanf("%d",&newnode->data);
 newnode->next=0;
 if(head==0)
 {
    head=temp=newnode;  
 }
 else{
    temp->next=newnode;
    temp=newnode;
 }
 printf("Do you want more nodes(0,1):");
 scanf("%d",&choice);
}
 while(choice);
 printf("Linked list\n");
 temp=head;
 while(temp!=0)
 {
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
 }
 printf("\nTotal nodes:%d",count);
 temp=head;
int n;//total nodes 
int pos;
printf("\nEnter,how many nodes you wants to insert:");
scanf("%d",&n);
if(n==0)
{
printf("No new nodes,The list is\n : ");
}
else if(n>count)
{
printf("\nInvalid nodes\n");
}
else
{
    for(int i=1;i<=n;i++)
{
    printf("Enter the position:");
scanf("%d",&pos);
 if(pos>count)
    {
        printf("Invalid position");
    }  
    else{
        while(i<pos-1)
        {
temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data you want to insert:");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
}
}
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;

}
printf("\nTotal nodes :\n %d",count+n);
return 0;

}
//fix it?
