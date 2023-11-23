#include<stdio.h>
void main()
{
int n, i, sum=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n], arr1[n];
printf("Enter array elements: ");

for (i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
printf("Copied array is: ");
for(i=0;i<n;i++)
{
arr1[i] =arr[i];
printf("%d ",arr1[i]);
}

printf("\n");

}
