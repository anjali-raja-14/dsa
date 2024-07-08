
/*************************************
     OPERATIONS ON SINGLY LINKED LIST 
**************************************/
#include<stdio.h>
#include<stdlib.h>
void  
insert_at_beg ()
{ 
  struct node
  {
	int data;
	struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice;
  int count = 0;
  do
	{     
	  newnode = (struct node *) malloc (sizeof (struct node));  
	  printf ("Enter the data:"); 
	  scanf ("%d", &newnode->data);     
	  newnode->next = 0;
	  if (head == 0)
		{
		  head = temp = newnode;
		}
	  else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	  printf ("Do you want more nodes(0,1):");
	  scanf ("%d", &choice);
	}
  while (choice); 
  temp = head;
  printf ("linked list:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\nTotal nodes:%d", count);
  //INSERTION AT THE BEGINNING 
  count = 0;
  newnode = (struct node *) malloc (sizeof (struct node));
  printf ("\nEnter the data which u wants to insert::");
  scanf ("%d", &newnode->data);
  newnode->next = head;
  head = newnode;
  temp = head;
  printf ("Linked list after insertion at the beginning:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\nTotal nodes:%d", count);
}

void
insert_at_end ()
{
  struct node
  {
	int data;
	struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice, count = 0;
  do
	{
	  newnode = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter the data:");
	  scanf ("%d", &newnode->data);
	  newnode->next = 0;
	  if (head == 0)
		{
		  head = temp = newnode;
		}
	  else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	  printf ("Do u want to continue(0,1):");
	  scanf ("%d", &choice);
	}
  while (choice);
  temp = head;
  printf ("\nLinked list:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\n Total Nodes:%d", count);
  newnode = (struct node *) malloc (sizeof (struct node));
  printf ("\nEnter data which u wants to insert: ");
  scanf ("%d", &newnode->data);
  newnode->next = 0;
  temp = head;
  while (temp->next != 0)
	{
	  temp = temp->next;
	}
  temp->next = newnode;
  temp = head;
  printf ("Linked list after insertion at the ending:\n ");
  temp = head;
  count = 0;
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\n Nodes:%d", count);
}

void
insert_at_pos ()
{
  struct node
  {
	int data;
	struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice, count = 0;
  do
	{
	  newnode = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter the data:");
	  scanf ("%d", &newnode->data);
	  newnode->next = 0;
	  if (head == 0)
		{
		  head = temp = newnode;
		}
	  else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	  printf ("Do u want to continue(0,1):");
	  scanf ("%d", &choice);
	}
  while (choice);
  temp = head;					//print the linked list
  printf ("\nLinked list:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\nNodes:%d\n", count);	//print nodes 
  int pos, i = 1;
  printf ("you can enter the position upto :%d\n ", count);
  printf ("Enter the position: ");
  scanf ("%d", &pos);
  if (pos > count)
	{
	  printf ("invalid position\n");
	}
  else
	{
	  temp = head;
	  while (i < pos)
		{
		  temp = temp->next;
		  i++;
		}
	  newnode = (struct node *) malloc (sizeof (struct node));
	  printf ("enter the data:");
	  scanf ("%d", &newnode->data);
	  newnode->next = temp->next;
	  temp->next = newnode;
	}
  printf ("Inserted linked list \n");
  temp = head;
  count = 0;
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\n Total Nodes:%d\t", count);
}

void
delete_at_beg ()
{
  struct node
  {
	int data;
	struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice, count = 0;
  do
	{
	  newnode = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter the data:");
	  scanf ("%d", &newnode->data);
	  newnode->next = 0;
	  if (head == 0)
		{
		  head = temp = newnode;
		}
	  else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	  printf ("Do u want to continue(0,1):");
	  scanf ("%d", &choice);
	}
  while (choice);
  temp = head;
  printf ("\nLinked list:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\nNodes:%d\n", count);
  printf ("DELETION AT THE BEGINNING \n ");
  count = 0;
  temp = head;
  head = head->next;
  free (temp);
  temp = head;
	while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\n Total Nodes after deletion:%d\t", count);
}

void
delete_at_end ()
{
  struct node
  {
	int data;
	struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice, count = 0;
  do
	{
	  newnode = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter the data:");
	  scanf ("%d", &newnode->data);
	  newnode->next = 0;
	  if (head == 0)
		{
		  head = temp = newnode;
		}
	  else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	  printf ("Do u want to continue(0,1):");
	  scanf ("%d", &choice);
	}
  while (choice);
  temp = head;					//print the linked list
  printf ("\nLinked list:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\nNodes:%d\n", count);	//print nodes 

//DELETION AT THE ENDING  
  count = 0;
  printf (" LINKED LIST AFTER DELETION AT THE ENDING\n ");
  struct node *prevnode;		//declare the new pointer 
  temp = head;
  while (temp->next != 0)		//traverse 
	{
	  prevnode = temp;
	  temp = temp->next;
	}
  if (temp == head)
	{
	  head = 0;
	}
  else
	{
	  prevnode->next = 0;
	}
  free (temp);
  temp = head;
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\n Total Nodes after deletion:%d\t", count);
}

void
delete_at_pos ()
{

  struct node
  {
	int data;
	struct node *next;
  };
  struct node *head, *newnode, *temp;
  head = 0;
  int choice, count = 0;
  do
	{
	  newnode = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter the data:");
	  scanf ("%d", &newnode->data);
	  newnode->next = 0;
	  if (head == 0)
		{
		  head = temp = newnode;
		}
	  else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	  printf ("Do u want to continue(0,1):");
	  scanf ("%d", &choice);
	}
  while (choice);
  temp = head;					//print the linked list
  printf ("\nLinked list:\n");
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\nNodes:%d\n", count);	//print nodes 
  printf ("DELETION AT THE SPECIFIC POSITION \n");
  struct node *nextnode;
  int pos, i = 1;
  count = 0;
  temp = head;
  printf ("Enter the position of node which you wants to delete:");
  scanf ("%d", &pos);
  while (i < pos - 1)			//traversing
	{
	  temp = temp->next;
	  i++;
	}							//delete krne k pos-1 prr temp pohochega 
  nextnode = temp->next;
  temp->next = nextnode->next;
  free (nextnode);
  temp = head;
  while (temp != 0)
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	  count++;
	}
  printf ("\n Total Nodes after deletion:%d\t", count);
}

int
main ()
{
  int ch;
  printf ("\n*SINGLY LINKED LIST*\n ");
  printf ("\n1.INSERTION AT THE BEGINNING.");
  printf ("\n2.INSERTION AT THE ENDING.");
  printf ("\n3.INSERTION AT THE SPECIFIC POSITION.");
  printf ("\n4.DELETION AT THE BEGINNING.");
  printf ("\n5.DELETION AT THE ENDING.");
  printf ("\n6.DELETION AT THE SPECIFIC POSITION.");
  printf ("\nEnter your choice:");
  scanf ("%d", &ch);
  switch (ch)
	{
	case 1:
	  printf (" \n OPERATION : INSERTION AT THE BEGINNING\n");
	  insert_at_beg ();
	  break;
	case 2:
	  printf ("\n OPERATION :INSERTION AT THE ENDING\n");
	  insert_at_end ();
	  break;
	case 3:
	  printf (" \n OPERATION :  INSERTION AT THE SPECIFIC POSITION \n");
	  insert_at_pos ();
	  break;
	case 4:
	  printf (" \n OPERATION : DELETION AT THE BEGINNING\n");
	  delete_at_beg ();
	  break;
	case 5:
	  printf ("\n OPERATION :DELETION AT THE ENDING\n");
	  delete_at_end ();
	  break;
	case 6:
	  printf (" \n OPERATION : DELETION  AT THE SPECIFIC POSITION \n");
	  delete_at_pos ();
	  break;
	default:
	  printf ("INVALID CHOICE");
	}
}
