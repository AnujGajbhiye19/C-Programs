#include<stdio.h>
void main()
{
int price,q;
printf("Enter Price and quantity: ");
scanf("%d %d",&price,&q);
float bill;
if(q>1000)
{
bill= price*q*0.9;
}
else
{
bill=price*q;
}

printf("Total bill= %f",bill);
}
