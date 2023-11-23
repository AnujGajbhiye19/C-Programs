#include<stdio.h>
int fact1(int n)
{
int ans=1;
for(int i=1;i<=n;i++)
{
ans= ans*i;
}
return ans;
}

void fact2(int n)
{
int ans=1;
for(int i=1;i<=n;i++)
{
ans = ans* i;
}
printf("Factorial is %d\n",ans);
}

void main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("Factorial is %d\n",fact1(n));
fact2(n);
}
