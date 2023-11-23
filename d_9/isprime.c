#include<stdio.h>

void isprime(int n)
{
int status =0;
//printf("2 ");
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
	printf("%d ",i);


}
}

void main()
{
int n;
printf("Enter range: ");
scanf("%d",&n);
isprime(n);
}
