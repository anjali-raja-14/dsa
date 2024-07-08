/***************************
CIRCULAR QUEUE IN LINKED LIST 

****************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*front=0;
struct node*rear=0;
//INSERTION 
void enqueue(int x)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
    rear->next=newnode;
    rear=newnode;
    rear->next=front;
    }
}
//DELETION 
void dequeue()
{
    struct node*temp;
    temp=front;
if(front==0&&rear==0)
{
    printf("The queue is empty ");
}
else if(front==rear)
{
    front=rear=0;
    free(temp);
}
else
{
    //rear/tail
    front=front->next;
    rear->next=front;
    free(temp);
}
}
void peek()
{
    if(front==0&&rear==0){
        printf("The queue is empty");
    }
else
{
   printf("The peek value is:%d\n",front->data);
}
}
void display()
{
    struct node*temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("The queue is empty ");
    }
    else{
        printf("The queue list is :");
        while(temp->next!=front)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
    }
}
int main()
{
    enqueue(3);
    enqueue(6);
    enqueue(9);
    enqueue(2);
    peek();
     display();
     dequeue();
     dequeue();
     display();
    return 0;
}