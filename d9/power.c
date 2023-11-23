#include<stdio.h>

void pow1(int n,int p)
{
int ans=1;
for(int i=0;i<p;i++)
	ans= ans*n;
printf("Answer is %d\n",ans);
}

int pow2(int n,int p)
{
int ans=1;
for(int i=0;i<p;i++)
	ans= ans*n;
return ans;
}

void main()
{
int n,p;
printf("Enter Number and Power: ");
scanf("%d %d",&n,&p);
pow1(n,p);
printf("Answer is %d\n",pow2(n,p));
}
