/*************************************************
BINARY SEARCH ALGORITHM 
**************************************************/

#include<stdio.h>
int main()
{
    int n, data,low,high,mid;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in sorted order\n");
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("\nEnter the %d no.:",i);
        scanf("%d",&a[i]);
    }
    printf("enter the data which u wants to search:");
    scanf("%d",&data);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<data)
        low=mid+1;
        else if (a[mid]==data)
        {
            printf("The %d found at position %d",data,mid);
            break;
        }
else
high=mid-1;
mid=(low+high)/2;
    }
if(low>high)
printf("%d is not present in array",data);
return 0;
    }





