#include<stdio.h>
void main()
{
int n, a,i;
printf("Enter a no.: ");
scanf("%d",&n);

a=n;
printf("10 consesutive odd no.s are: ");
for(i=0;i<10;i++)
{
if(n%2!=0)
{
	n+=2;
	printf("%d ",n);
}
else
{
	n-=1;
	printf("%d ",n+=2);
}

}

printf("\n10 consesutive even no.s are: ");
n=a;
for(i=0;i<10;i++)
{
if(n%2==0)
{
	n+=2;
	printf("%d ",n);
}
else
{
	n-=1;
	printf("%d ",n+=2);
}

}
printf("\n");


}
