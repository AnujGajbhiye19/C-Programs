#include<stdio.h>
void main()
{
int n, i, lsum=0,rsum=0, status=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n], arr1[n];
printf("Enter array elements: ");

for (i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
lsum=0;
rsum=0;
status=0;

for(int j=0;j<i;j++)
	lsum+= arr[j];
for(int k=n-1;k>i;k--)
	rsum+= arr[k];

if(lsum==rsum)
{
	status=1;
	break;
}
}
if(status==1)
	printf("Equilibrium is found on %d at index %d.",arr[i],i);
else
	printf("Equilibrium is not found.");

printf("\n");

}
