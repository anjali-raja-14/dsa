/********************
 SELECTION SORT 
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
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
     if(a[j]<a[i]){
     int temp=a[j];
a[j]=a[i];
a[i]=temp;

    }
  }
  }
   //PRINT SORTED ARRAY CODE 
printf("\nThe sorted array(selection sort):\n");
 for(int i=0;i<n-1;i++)
 {
    printf("%d\t",a[i]);
 }
}