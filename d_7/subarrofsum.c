#include<stdio.h>
void main()
{
	int n,i,s,sum=0,status=0;
	printf("Enter size of array and Expected sum: ");
	scanf("%d %d",&n,&s);
	int arr[n];

	printf("Enter elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}



	for(i=0;i<n;i++)
	{
		status=0;
		sum=arr[i];
		for(int j=i+1;j<n;j++)
		{
			sum= sum+ arr[j];
			if(sum==s)
			{
				status=1;
				for(int k=i; k<=j;k++)
				{
					printf("%d ",arr[k]);
				}

				break;
			}

		}
		if(status==1)
			printf("\n");

		}




	printf("\n");
}
