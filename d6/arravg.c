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
sum+=arr[i];
}
float avg= sum/n;
printf("Average of array elements is %f",avg);

printf("\n");

}