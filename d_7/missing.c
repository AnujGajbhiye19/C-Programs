#include<stdio.h>
void main()
{
int n,i;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
int s1,s2=0;

s1=(n+1)*(n+2)/2;

printf("Enter elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
s2=s2+ arr[i];
}

int missing= s1-s2;

printf("Missing number = %d",missing);

printf("\n");
}
