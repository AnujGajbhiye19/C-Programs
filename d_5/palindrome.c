#include<stdio.h>
void main()
{
int n, rev=0, rem=0;
printf("Enter a number: ");
scanf("%d",&n);
int pal=n;

while(n>0)
{
rem=n%10;
n/=10;
rev= rev*10 + rem;

}

if(rev==pal)
	printf("This is a Palindrome Number\n");
else
	printf("This is not a Palindrome Number\n");

}
