//firts in last out =last in first out ( LIFO=FILO )
#include<stdio.h>
#include<stdlib.h>
int stack[100];
int n = 100;
int top = -1;//the stack is empty 
void
push ()
{
  int x;
  printf ("Enter the value which you wants to push:");
  scanf ("%d", &x);
  if (top == n - 1)
 {
   printf ("->The stack is overflow \n");
 }
  else
 {
   top++;
   stack[top] = x;
 }
 printf("The push element is:%d",stack[top]);
}

void
pop ()
{

  if (top == -1)
 {
   printf (" ->The stack is empty\n");
 }
  else
 {
   n = stack[top];
   top--;
   printf (" the pop element:%d", stack[top]);
 }
}

void
peep ()
{
  if (top == -1)
 printf ("->The stack is empty\n");

  else
 printf ("%d", stack[top]);   
}

void
display ()
{
  
   printf("The stack was empty \n No element in the stack");
  for (int i = top; i >= 0; i--)
 {
   printf ("%d", stack[i]);
}}
void isfull()
{
  if(top==n-1)
  {
    printf("The stack is full\n");
  }
  else{
    printf("THe stack is not full\n");
  }
}
void isempty()
{
  if(top==-1)
  {
    printf("The stack is empty \n ");
  }
  else{
    printf("The stack is not empty\n");
  }
}

int
main ()
{
  int ch;
 
  printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. peep\n");
        printf("4. display\n");
        printf("5. Empty\n");
        printf("6. full\n");
 printf("☆Enter your choice:");
  scanf ("%d", &ch);
do{

  switch (ch)
 {
 case 1:
   push ();
   break;
 case 2:
   pop ();
   break;
 case 3:
   peep ();
   break;
 case 4:
   display ();
   break;
   case 5:
   isempty();
   break;
   case 6:
   isfull();
  

   
 }}
 while(ch=0);
  return 0;
}