#include<stdio.h>
void main()
{
int n, no, arm=0, rem=0, sum=0, count=0;

printf("Enter a number: ");
scanf("%d",&n);

printf("Armstrong numbers: ");

for(int i=1;i<=n;i++)
{
sum =0;
no=i;

while(no>0)
{
rem=no%10;
sum= sum +rem*rem*rem;
no/=10;

}
if (i==sum)
	{
	count++;
	printf("%d ",i);
	}

}

printf("\n Armstrong Count: %d\n", count);


}
