#include<stdio.h>
void main()
{
int n, rev=0, rem=0,temp,temp2;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;

while(n>0)
{
rem=n%10;
n/=10;
rev= rev*10 + rem;

}

if(rev==temp)
	printf("%d - Palindrome\n",temp);
else
{
	temp2=temp/10;
	rev=0;
	while(temp2>0)
	{
	rem=temp2%10;
	temp2/=10;
	rev= rev*10 + rem;

	}
	printf("rev= %d",rev);
	printf("%d - %d%d\n",temp,temp,rev);
	
}
}
