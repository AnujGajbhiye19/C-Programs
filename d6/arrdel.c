#include<stdio.h>
void main()
{
int n,i,d;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];

printf("Enter array1 elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Enter element to delete: ");
scanf("%d",&d);

for(i=0;i<n;i++)
{
if(arr[i]==d)
{
for(int j=i;j<n-1;j++)
{
arr[i]=arr[i+1];
}
}
}

printf("Modified Array: ");
for(i=0;i<n-1;i++)
{
printf("%d ",arr[i]);
}

printf("\n");

}
