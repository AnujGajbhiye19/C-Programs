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

int s, status=0;
printf("Enter no. to search: ");
scanf("%d",&s);

for(int i=0; i<n; i++)
{
if(arr[i]==s)
{
status=1;
break;
}
}

if(status==1)
	printf("Given number is present in array.");
else
	printf("Given number is not present in array.");

printf("\n");

}
