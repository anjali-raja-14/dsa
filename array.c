//switch case using array operations 
#include <stdio.h>
//insertion 
void
inserting ()
{
  int i, I,val,n;
  printf ("Enter the size of array:");
  scanf ("%d", &n);
  int arr[n];
  printf ("Enter the array element(integer value)\n");
  for (i = 0; i <= n - 2; i++)
 {
   printf ("Enter the %d element:", i);
   scanf ("%d", &arr[i]);
 }
  printf ("Enter the index value of inserting element:");
  scanf ("%d", &I);
  if (I < 0 || I >= n)
 {
   printf ("Invalid index no.");
 }
  else
 {
   printf ("Enter the value of inserting element:");
   scanf ("%d", &val);
   //shifting
   for (i = n; i >= I; i--)
  //insertion
  arr[i + 1] = arr[i];
   arr[I] = val;
     printf ("The inserted array:\n");
   for (i = 0; i <= n - 1; i++)
  {
     printf("%d |",arr[i]);
  }
 }
}
//searching function
void
searching ()
{
  int n;
  int i;
  printf ("enter the size of array:");
  scanf ("%d", &n);
   int arr[n];
  for ( i = 0; i <= n - 1; i++)
 {
   printf ("enter the %d element:", i);
   scanf ("%d", &arr[i]);
 }
 int num;
  printf ("enter the number which you wants to search:");
  scanf ("%d", &num);

  for (i = 0; i <= n - 1; i++)

 { if (arr[i] == num)
  
  { printf ("The no. is found in the array");
    break;}
  
   else if (i == n - 1)
  printf ("The no. is not found in the array");
 }
}
//traversing function 
void traversing()
{
 int x;
 int i;
 printf("Enter the size of array:");
 scanf("%d",&x);
 int arr[x];
 printf("Enter the elements of array\n");
 for(int i=0;i<=x-1;i++)
 {
     printf("the %d element :",i);
     scanf("%d",&arr[i]);
 }
  printf("The traversing array\n");
  for(int i=0;i<=x-1;i++)
  {
      printf("%d |",arr[i]);
  }
}
//deletion function 
void deletion()
{
 int n;
 int i;
 int d;
 printf("Enter the size of array:");
 scanf("%d",&n);
  printf("Enter the index no. of deleting element:");
 scanf("%d",&d);
   if (d < 0 || d >= n)
 {
   printf ("Invalid index no\n.");
 }
 else
 {
 int arr[n];
 printf("Enter the elements of array\n");
 for(int i=0;i<=n-1;i++)
 {
     printf("the %d element :",i);
     scanf("%d",&arr[i]);
 } for(int i=d;i<=n-1;i++)
 {
     arr[i]=arr[i+1];
 }
 n--;
printf("After deleting element,the array is:\n");
for(int i=0;i<=n-1;i++)
{
    printf("%d|",arr[i]);
}
}
}
//sorting function 
void sorting()
{
 int n;
 int i;
 int temp;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elements of array\n");
 for(int i=0;i<=n-1;i++)
 {
     printf("the %d element :",i);
     scanf("%d",&arr[i]);   
}
for(int i=n;i>0;i--){
    for(int j=0;j<i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("The Sorted array:\n");
for(int i=0;i<=n-1;i++)
{
    printf("%d|",arr[i]);
}
}
int
main ()
{
  printf ("Array operations \n");
  printf (" 1.Insertion\n ");
  printf ("2.Searching \n");
  printf (" 3.Traversing \n");
  printf(" 4.Deletion\n");
  printf(" 5.Sorting\n");
  int ch;
  printf ("Enter your choice:");
  scanf ("%d", &ch);
  printf ("you select the array operation>>%d\n",ch);
  if (ch == 1)
 printf ("Insertion\n ");
  if (ch == 2)
 printf ("searching \n ");
 if(ch==3)
 printf("Traversing\n");
 if(ch==4)
 printf("Deletion\n");
 if(ch==5)
 printf("Sorting\n");
  switch (ch)
 {
 case 1:
   inserting ();
   break;
 case 2:
   searching ();
   break;
 case 3:
   traversing();
   break;
 case 4:
 deletion();
 break;
 case 5:
 sorting();
 break;
 default:printf("invalid choice");
 }
  return 0;
}
