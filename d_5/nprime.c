#include<stdio.h>
void main()
{
int n,status=1,count=0;

printf("Enter a Number: ");
scanf("%d",&n);

printf("Prime Numbers: ");

for(int i=2;i<=n;i++)
{
status=1;
	for (int j=2;j<i;j++)
	{
		if(i%j==0)
		{
			status=0;
			break;
		}

	}

	if(status==1)
	{
		count++;
		printf("%d ",i);
	}

}

printf("\nCount = %d\n",count);

}
