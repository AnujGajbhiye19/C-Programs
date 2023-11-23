#include<stdio.h>
int bill(int code,int q)
{
if(code==101)
	return 150*q;
if(code==102)
	return 100*q;
}

void main()
{
int code, q;
printf("Enter code & quantity: ");
scanf("%d %d",&code,&q);
printf("Bill: Rs.%d\n",bill(code,q));
}
