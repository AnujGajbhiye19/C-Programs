#include<stdio.h>
void main()
{
	int n,i,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];

	printf("Enter array Elements: ");
	for(i=0;i<n;i++)
	{
			scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i+2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}

	printf("Wave array :");
	for(i=0;i<n;i++);
		printf("%d ",arr[i]);

}
