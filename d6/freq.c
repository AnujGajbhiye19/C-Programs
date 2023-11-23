#include<stdio.h>
void main()
{
int n,i,c;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n],count[n];

printf("Enter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Array    : ");
for(i=0;i<n;i++)
{
c=0;
for(int j=0;j<n;j++)
{
if(arr[i]==arr[j])
c++;

}
count[i]=c;
printf("%d ",arr[i]);
}

printf("\nFrequency: ");
for(i=0;i<n;i++)
{
printf("%d ",count[i]);
}

printf("\n");

}
