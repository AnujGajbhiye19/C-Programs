#include<stdio.h>
void main()
{
int n, i, lsum=0,rsum=0, status=0,choice=0,temp;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n], arr1[n];
printf("Enter array elements: ");

for (i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}

printf("Enter Choice to rotate Array.\n");
printf("Enter 1 for leftshift or 2 for rightshift: ");
scanf("%d",&choice);


if(choice==1)
{
temp=arr[0];
for(i=0;i<n;i++)
	arr[i]=arr[i+1];
arr[n-1]=temp;

}
if(choice==2)
{
temp=arr[n-1];
for(i=n-1;i>=0;i--)
	arr[i]=arr[i-1];
arr[0]=temp;

}


printf("Rotated array is: ");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}

printf("\n");

}
