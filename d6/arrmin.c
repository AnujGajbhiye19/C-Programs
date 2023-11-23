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

int min=arr[1];
for(int i=0; i<n; i++)
{
if(arr[i]<min)
	min=arr[i];
}

printf("Minimum of array= %d",min);

printf("\n");

}
