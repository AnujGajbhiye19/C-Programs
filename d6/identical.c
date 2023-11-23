#include<stdio.h>
void main()
{
int n,i,status=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr1[n],arr2[n];

printf("Enter array1 elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
}

printf("Enter array2 elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr2[i]);
}

for(i=0;i<n;i++)
{
if(arr1[i]!=arr2[i])
{
	status=0;
	break;
}
else 
	status=1;

}

if(status==0)
	printf("2 Arrays are not equal\n");
else
	printf("2 Arrays are equal\n");

printf("\n");

}
