#include<stdio.h>
void main()
{
int cash, n10,n50,n100;
printf("Enter amount to be withdrawn");
scanf("%d",&cash);
n10=cash/10;
n50=cash/50;
n100=cash/100;
printf("Required notes of 10 : %d\n",n10);
printf("Required notes of 50 : %d\n",n50);
printf("Required notes of 100 : %d\n",n100);
}
