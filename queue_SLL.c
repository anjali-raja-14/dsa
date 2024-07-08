/*************************************

QUEUE WITH LINKED LIST


*************************************/

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;//4byte
struct node*next;//4 byte 
};
struct node*front=0;//pointer
struct node*rear=0;//pointer

void enqueue(int x)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));//dynamic memory allocation 
newnode->data=x;//paas the value 
newnode->next=0;
if(front==0&&rear==0)
{
front=rear=newnode;//newnode point the latest node
}
else{
    rear->next=newnode;
    rear=newnode;
}
}
void display()
{
    struct node*temp;
    if(front==0&&rear==0)
    {
        printf("The queue list is empty");
    }
    else{
    temp=front;
    printf("\nThe queue list is:\n");
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    }
}
void dequeue()
{
    struct node*temp;
     temp=front;
    if(front==0&&rear==0)
    {
        printf("The queue is empty");
    }
    else{
        printf("\nThe dequeue(delete) element is: %d",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
struct node*temp;
temp=front;
if(front==0&&rear==0)
{
    printf("The queue is empty");
}
else{
    printf("\nThe peek element is:%d",temp->data);
}
}
int main()
{
    enqueue(3);
    enqueue(6);
    enqueue(9);
     enqueue(12);
    enqueue(15);
    enqueue(18);
    display(21);
     peek();
    dequeue();
     dequeue();
     display();
     peek();
    return 0;
}
