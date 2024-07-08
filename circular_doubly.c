
/********************************

DOUBLY CIRCULAR LINKED LIST(CREATION)

********************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else 
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
   printf("\nTotal nodes:%d",count+1);

}
*/

/********************************

INSERTION AT BEGINNING 

********************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:\n");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
   printf("\nTotal nodes:%d",count+1);
//CODE FOR INSERTION AT BEGINNING 
temp=head;
count=0;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data which you wansts to insert:");
scanf("%d",&newnode->data);
newnode->prev=tail;
newnode->next=head;
head=newnode;
tail->next=head;
temp=head;
printf("\nINSERTED LINKED LIST:\n");
while(temp!=tail)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("%d\t",temp->data);
printf("\nNodes:%d",count+1);
}


*/


/********************************

INSERTION AT ENDING 

********************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:\n");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
   printf("\nTotal nodes:%d",count+1);
//CODE FOR INSERTION AT ENDING 
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data which you wansts to insert:");
scanf("%d",&newnode->data);
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail->next=newnode;
tail=newnode;
temp=head;
printf("\nINSERTED LINKED LIST:\n");
while(temp!=tail)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("%d\t",temp->data);
printf("\nNodes:%d",count+1);
}

*/






/********************************

INSERTION AT SPECIFIC POSITION

********************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:\n");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
//CODE FOR INSERTION AT  SPECIFIC POSITION
int i=1,pos;
printf("\nEnter the position:");
scanf("%d",&pos);
if(pos>count)
{
    printf("\nInvalid position\n");
}
else{
    temp=head;
       while(i<pos-1)
       {
        temp=temp->next;
        i++;
       }
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("\nenter the daata which you wansts to insert:");
       scanf("%d",&newnode->data);
       newnode->next=temp->next;
       temp->next=newnode;
       newnode->prev=temp;
       newnode->next->prev=newnode;
}
temp=head;
count=0;
printf("\nINSERTED LINKED LIST:\n");
while(temp!=tail)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("%d\t",temp->data);
printf("\nTotal nodes:%d",count+1);
}


*/





/********************************

DELETION  AT BEGINNING 

********************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:\n");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
   printf("\nTotal nodes:%d",count+1);
//CODE FOR DELETION  AT BEGINNING 
temp=head;
count=0;
head=temp->next;
tail->next=head;
temp->next=0;
free(temp);
temp=head;
printf("\nINSERTED LINKED LIST:\n");
while(temp!=tail)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("%d\t",temp->data);
printf("\nNodes:%d",count+1);
}

*/


/********************************

DELETION  AT ENDING 

********************************/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:\n");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
   printf("\nTotal nodes:%d",count+1);
//CODE FOR DELETION  AT ENDING 
temp=head;
count=0;
temp->prev=tail->prev;
tail->prev->next=head;
tail->next=0;
tail->prev=0;
free(tail);
tail=head->prev;
temp=head;
printf("\nINSERTED LINKED LIST:\n");
while(temp!=tail)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("%d\t",temp->data);
printf("\nNodes:%d",count+1);
}



*/


/********************************

DELETION  AT SPECIFIC POSITION  

********************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node*prev;
        struct node*next;
    };
    struct node*head,*newnode,*tail;
    head=0;
    int count=0;
    int choice;
   do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0)
{
    head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("Enter your choice:");
scanf("%d",&choice);
}while(choice);
struct node*temp;//for print nodes
temp=head;
printf("\nThe doubly Linked List:\n");
 while(temp!=tail)
   { printf("%d\t",temp->data);
    temp=temp->next;
    count++;
   }
   printf("%d",temp->data);
   printf("\nTotal nodes:%d",count+1);
//CODE FOR DELETION  AT SPECIFIC POSITION
int i=1,pos;
printf("\nenter the pos:");
scanf("%d",&pos);
if(pos>count)
{
    printf("\ninvalid\n");
}
else{
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
temp->next=0;
temp->prev=0;
free(temp);
}
temp=head;
printf("\nDELETED LINKED LIST:\n");
count=0;
while(temp!=tail)
{
    printf("%d\t",temp->data);
    temp=temp->next;
    count++;
}
printf("%d\t",temp->data);
printf("\nNodes:%d",count+1);
}