#include<stdio.h>
void main()
{
int n, i, sum=0,z=0,p=0,ng=0,e=0,o=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n], arr1[n];
printf("Enter array elements: ");

for (i=0; i<n; i++)
{
scanf("%d",&arr[i]);
if(arr[i]==0)
	z++;
if(arr[i]>0)
	p++;
if(arr[i]<0)
	ng++;
if(arr[i]%2==0)
	e++;
if(arr[i]%2!=0)
	o++;
}

printf("Even count: %d\n",e);
printf("Odd count: %d\n",o);
printf("Zero count: %d\n",z);
printf("Positive count: %d\n",p);
printf("Negative count: %d\n",ng);


printf("\n");

}
