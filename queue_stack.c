/*****************************

QUEUE  USING STACK 

******************************/

#include<stdio.h>
#define n 5
int s1[n],s2[n];
int top1=-1,top2=-1;
int count=0;
void push1 (int data)
{   
  if(top1==n-1)
  {
    printf("\noverflow");
  }  
  else
  {
    top1++;
    s1[top1]=data;
  }
}
void enqueue(int x)
{
    push1(x);
    count++;
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}
void push2(int data)
{
    if(top2==n-1)
    {
printf("overflow");
    }
    else{
        top2++;
        s2[top2]=data;
    }
}                                                                                                                                                                                                                     
void dequeue()
{
int i,a,b;
if(top1==-1&&top2==-1)
{
    printf("queue is empty");
}
else{
   for(i=0;i<count;i++)
   {
    a=pop1();
    push2(a);
   } 
   b=pop2();
   printf("\nThe dequeue element is:");
   printf("%d\t",b);
   count--;
   for(i=0;i<count;i++)
   {
    a=pop2();
    push1(a);
   }
}
}
void display()
{
     printf("\nThe list is :\n");
    int i;
    for(i=0;i<=top1;i++)
    {
        printf("%d\t",s1[i]);
    }
}
int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(18);
    enqueue(12);
    display();
    dequeue(); 
    dequeue(); 
     display();
    return 0;
}


