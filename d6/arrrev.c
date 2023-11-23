#include<stdio.h>
void main()
{
int n, i, sum=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements: ");

for (i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
printf("Reverse array is: ");
for(i=n-1;i>=0;i--)
{

printf("%d ",arr[i]);
}

printf("\n");

}
