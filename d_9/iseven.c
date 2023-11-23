#include<stdio.h>

void iseven(int n)
{
for(int i=1;i<=n;i++)
{
if(i%2==0)
	printf("%d ",i);
if(i%20==0)
	printf("\n");
}
}

void main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

iseven(n);

}
