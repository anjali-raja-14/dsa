/********************
 INSERTION SORT 
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
    //INSERTION  SORT CODE 
  for(int i=1;i<n;i++)
  {
    int current=a[i];  
int j=i-1;
while(a[j]>current&&j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=current;
  }
   //PRINT SORTED ARRAY CODE 
printf("\nThe sorted array(bubble sort):\n");
 for(int i=0;i<n-1;i++)
 {
    printf("%d\t",a[i]);
 }
}