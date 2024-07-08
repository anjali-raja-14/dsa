/*****************************
 
 DOUBLY LINKED LIST CREATION 

******************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   struct node
   {
    int data;
    struct node*prev;
    struct node*next;
   } ;
   struct node*head,*tail,*newnode,*temp;
    head=0;
   int choice;
   do
   {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter data:");
   scanf("%d",&newnode->data);
   newnode->next=0;
   newnode->prev=0;
   if(head==0)
   { 
    head=temp=tail=newnode;
   }
else
{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;//newnode ka data tail m daal do 
}
printf("Enter your choice(0,1):");
scanf("%d",&choice);
}while(choice);

temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}
*/

/****************************************
 
 DOUBLY LINKED LIST INSERTION AT BEGINNING 

*****************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
    int data;
    struct node*prev;
    struct node*next;
    };
    struct node*head,*temp,*tail,*newnode;
    head=0;
    int choice;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
  head=temp=tail=newnode;
    }
    else
    {
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
    }
    printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }while(choice);
    printf("doubly linked list:\n");
    temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
//INSERTION AT BEGINNING 
newnode=(struct node*)malloc(sizeof(struct node));
temp=head;
printf("\nEnter the data which you wants to insert:");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
head->prev=newnode;
newnode->next=head;
head=newnode;
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}



/****************************************
 
 DOUBLY LINKED LIST INSERTION AT ENDING 

*****************************************/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
    int data;
    struct node*prev;
    struct node*next;
    };
    struct node*head,*temp,*tail,*newnode;
    head=0;
    int choice;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
  head=temp=tail=newnode;
    }
    else
    {
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
    }
    printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }while(choice);
    printf("doubly linked list:\n");
    temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
//INSERTION AT ENDING 
newnode=(struct node*)malloc(sizeof(struct node));
temp=head;
printf("\nEnter the data which you wants to insert:");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
newnode->prev=tail;
tail->next=newnode; 
tail=newnode;
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}
*/

/****************************************
 
 DOUBLY LINKED LIST INSERTION AT SPECIFIC POSITION 

*****************************************/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
    int data;
    struct node*prev;
    struct node*next;
    };
    struct node*head,*temp,*tail,*newnode;
    head=0;
    int choice;
    int count=0; 
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
  head=temp=tail=newnode;
    }
    else
    {
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
    }
    printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }while(choice);
    printf("doubly linked list:\n");
    temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}

//INSERTION AT SPECIFIC POSITION 
int pos,i=1; 
printf("\nEnter the position of insertion:");
scanf("%d",&pos);
if(pos>count)
{
    printf("invalid poition");
}
else if(pos==1)
{
    printf("cannot insert");
    printf("go to insert at beginning "); 
}
else{
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data which you wants to insert:");
scanf("%d",&newnode->data);
while(i<pos-1)
{temp=temp->next;
i++;}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
newnode->next->prev=newnode;
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}
}
*/
/****************************************
 
 DOUBLY LINKED LIST DELETION AT BEGINNING 

*****************************************/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
    int data;
    struct node*prev;
    struct node*next;
    };
    struct node*head,*temp,*tail,*newnode;
    head=0;
    int count=0;
    int choice;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
  head=temp=tail=newnode;
    }
    else
    {
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
    }
    printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }while(choice);
    printf("doubly linked list:\n");
    temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("\nThe nodes are:%d",count);
//DELETION AT BEGINNING 

temp=head;
if(head==0)
{
    printf("The linked list is empty");
}
else{
    head=temp->next;
temp->next->prev=0;
free(temp);
}
printf("\n The deleted doubly linked list\n");
temp=head;
count=0;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("\nTotal nodes after deletion:%d",count);
}
*/

/****************************************
 
 DOUBLY LINKED LIST DELETION AT ENDING  

*****************************************/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
    int data;
    struct node*prev;
    struct node*next;
    };
    struct node*head,*temp,*tail,*newnode;
    head=0;
    int count=0;
    int choice;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
  head=temp=tail=newnode;
    }
    else
    {
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
    }
    printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }while(choice);
    printf("doubly linked list:\n");
    temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("\nThe nodes are:%d",count);
//DELETION AT ENDING 

temp=head;
if(tail==0)
{
    printf("The linked list is empty");
}
else{
    temp=tail;
    tail->prev->next=0;
    tail=tail->prev;
free(temp);
}
printf("\n The deleted doubly linked list\n");
temp=head;
count=0;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("\nTotal nodes after deletion:%d",count);
}
*/

/****************************************
 
 DOUBLY LINKED LIST DELETION AT SPECIFIC POSITION  

*****************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
    int data;
    struct node*prev;
    struct node*next;
    };
    struct node*head,*temp,*tail,*newnode;
    head=0;
    int count=0;
    int choice;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
  head=temp=tail=newnode;
    }
    else
    {
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
    }
    printf("Enter your choice(0,1):");
    scanf("%d",&choice);
    }while(choice);
    printf("doubly linked list:\n");
    temp=head;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("\nThe nodes are:%d",count);
//DELETION AT SPECIFIC POSITION 

int pos,i=1;
temp=head;
printf("\nEnter the position of deletion:");
scanf("%d",&pos);
while(i<pos)
{
    temp=temp->next;
    i++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
printf("\n The deleted list:\n");
temp=head;
count=0;
while(temp!=0)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("\nTotal nodes after deletion:%d",count);
}


