#include<stdio.h>
void main()
{
int days, months, r_days;
printf("Enter days");
scanf("%d",&days);
months= days/30;
r_days= days%30;
printf("Answer is: %d months and %d days\n", months, r_days);
}
