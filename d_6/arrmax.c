#include<stdio.h>
void main()
{
int n, sum=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements: ");

for (int i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}

int max=arr[1];
for(int i=0; i<n; i++)
{
if(arr[i]>max)
	max=arr[i];
}

printf("Maximum of array= %d",max);

printf("\n");

}
