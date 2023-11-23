#include<stdio.h>
void main()
{
	int i,j,dif,d,temp;
	int arr[5], diff[5];

	printf("Enter array Elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	diff[0]=arr[0];

	printf("Original   Array: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n\nDifference Array: ");


	for(i=1;i<5;i++)
	{
		dif=-100;
		for(j=i-1;j>=0;j--) //j=i+1 ; j<5; j++
		{
			d=arr[i]-arr[j];
			if(d>dif)
			{
				dif=d;

			}

		}
		//printf("%d ",dif);
		diff[i]=dif;

	}



	for(i=0;i<5;i++)
	{
		printf("%d ",diff[i]);
	}

	printf("\n");
}






