#include<stdio.h>
void main()
{
int n,s;
printf("enter a 4 digit number \n");
scanf("%d",&n);
s=n/1000 + n%10;
printf("Sum of 1st and last digit is : %d \n",s);



}

