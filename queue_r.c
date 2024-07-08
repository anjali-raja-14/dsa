#include<stdio.h>
#define n 5 
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x)
{
if(rear==n-1)
{
    printf("the queue is empty");
}
else if(front==-1&&rear==-1)
{
    front=rear=0;
    queue[rear]=x;
    printf("%d\t",queue[rear]);
}
else{
    rear++;
    queue[rear]=x;
     printf("%d\t",queue[rear]);
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("The queue is empty");
}
else if(front==rear)
{
    printf("\nThe dequeue(delete)element is:%d\t",queue[front]);
front=rear=-1;
}
else
{
    printf("\nThe dequeue(delete)element is:%d\t",queue[front]);
    front++;
}
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("\nunderflow");
    }
       else{
        printf("\nThe display queue is :\n");
        for(int i=front;i<rear+1;i++)
          {  printf("%d\t",queue[i]);
        }
       }
}
void peek()
{
 if(front==-1&&rear==-1)
 printf("underflow");

else 
printf("\nThe peek value is:");
{
    printf("%d",queue[front]);
}
}
int main()
{
enqueue(6);
enqueue(8);
enqueue(9);
enqueue(3);
enqueue(10);
peek();
display();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
return 0;
}
