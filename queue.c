#include<stdio.h>//  FIFO   
#define n 5
int queue[n];
int front=-1;//deletion 
int rear=-1;//insertion
void enqueue(int x)//enqueue means isertion
{
if(rear==n-1)
{
    printf("\nThe queue is overflow now ");
}
else if(front==-1&&rear==-1)
{
    front=rear=0;
    queue[rear]=x;
}
else
rear++;
{
    queue[rear]=x;
}
printf("%d\t",queue[rear]);
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("underflow");
    }
  else if(front==rear)
  {
    front=rear=-1;
  }
  else
 {
      printf("\nThe dequeue(delete) element is %d",queue[front]);
      front++;
  }
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("underflow");
    }
    else
    
    printf("\nThe display element:\n");  
  for(int i=front;i<rear+1;i++)
  {
      printf("%d\t",queue[i]);
  }
}
void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{
 printf("The queue elements are:\n");
 enqueue(2);
 enqueue(3);
 enqueue(4);
 enqueue(5);
 enqueue(6);
  printf("\nThe peak element:");
  peek();
 display();
 dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();

 
 
}