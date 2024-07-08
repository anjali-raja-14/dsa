#include <stdio.h>
#define n 5 // n is the size
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x) {
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("%d\t",queue[rear]);
    }
    else if(((rear+1)%n)==front)
    {
        printf("queue is full ");
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=x;
        printf("%d\t",queue[rear]);
    }
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
        printf("\n%d",queue[front]);  
        front=(front+1)%n;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }
    else
    {
        printf("\nqueue is\n");
        while (i != rear)
        {
            printf("%d\t", queue[i]);
            i = (i + 1) % n;
        }
        printf("%d\t", queue[i]); // print the last element
    }
}

int main() {
    printf("The queue elements are\n");
    enqueue(2);
    enqueue(5);
    enqueue(7);
    enqueue(6); // This will print "Queue is full"
    printf("\nThe dequeue element");
    dequeue();
    dequeue();
    display();
    enqueue(9);
    enqueue(10);
    enqueue(3);
    return 0;
}