#include<stdio.h>
void main()
{
int n, rem=0, rev=0;
printf("Enter a number: ");
scanf("%d",&n);

while(n>0)
{
rem=n%10;
n/=10;
rev = rev*10 +rem;

}
printf("Reverse is %d\n",rev);

}
