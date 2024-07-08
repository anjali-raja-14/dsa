/************************************************
FIND THE DATA IS PRESENT OR NOT IN THE ARRAY 
 *************************************************/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the %d no.:",i);
        scanf("%d",&a[i]);
    }
    int data;
    int found=0;
    printf("Enter the Data which you wants to search:");
    scanf("%d",&data);
    for(int i=0;i<n;i++)
    {
if(a[i]==data)
{
    printf("The data is found at %d position ",i);
    found++;
    break;
}
    }
if(found==0)
{
    printf("The data is not found");
}

}