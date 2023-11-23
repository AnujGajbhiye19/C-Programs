#include<stdio.h>
void main()
{
int n, sum=0, rem=0;
printf("Enter a number: ");
scanf("%d",&n);

while(n>0)
{
rem=n%10;
n/=10;
sum+=rem;

}
printf("Sum of digits is %d\n",sum);

}
