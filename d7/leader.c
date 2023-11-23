#include<stdio.h>
void main()
{
int n,i, status=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];

printf("Enter elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Leaders in the array: ");
for(i=0;i<n;i++)
{
	status=0;
	for(int j=i+1;j<n;j++)
	{
		if(arr[i] < arr[j])
			{
				status=0;
				break;
			}
		else
			status=1;
	}

	if(status==1)
		printf("%d ",arr[i]);
	
	
}

printf("%d ",arr[n-1]);

printf("\n");
}
