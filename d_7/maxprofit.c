#include<stdio.h>
void main()
{
	int n, i, j, buy, sell, profit=0, max1=0, max2=0;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			profit=arr[j]-arr[i];
			//printf("%d\n",profit);
			if(profit>max1)
			{
				sell=j;
				max1=profit;
			}
		}
		if(max1>max2)
		{
			buy=i;
			max2=max1;;
		}
	}
printf("You can get Maximum Profit by buying share on Day %d and Selling it on day %d.\n",buy,sell);
printf("Hence, Maximum Profit is Rs.%d.\n",max2);

}
