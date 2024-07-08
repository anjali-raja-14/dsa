/********************
 BUBBLE SORT 
********************/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        printf("Enter the %d element:",i);
        scanf("%d",&a[i]);
    }
    //BUBBLE SORT CODE 
   int counter=1;
   while(counter<n)
   {
   for(int i=0;i<n-counter;i++)
   {
    if(a[i]>a[i+1])
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
   }
   counter++;
   }
   //PRINT SORTED ARRAY CODE 
printf("\nThe sorted array(bubble sort):\n");
 for(int i=0;i<n-1;i++)
 {
    printf("%d\t",a[i]);
 }
}