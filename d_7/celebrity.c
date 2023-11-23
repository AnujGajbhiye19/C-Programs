#include<stdio.h>
void main()
{
int arr[4][4]={{0,1,1,0},
			  {1,0,1,0},
			  {0,0,0,0},
			  {1,0,1,0}};
int sum=0,i,j,k,status=0;

for(i=0;i<4;i++)
{
	status=0;
	sum=0;
	for(j=0;j<4;j++)
	{
		sum=sum+arr[i][j];
	}

	if(sum==0)
	{
		for(k=0;k<4;k++)
		{
			sum=sum+arr[k][i];
		}
	}
	if(sum==3)
	{
		status=1;
		break;
	}

}

if(status==1)
	printf("Celebrity found on %dth row(1-indexing).",i+1);
else
	printf("Celebrity not found.");

printf("\n");



}
