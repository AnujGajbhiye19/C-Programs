#include<stdio.h>
void main()
{
float days, months, weeks, years;
printf("Enter days");
scanf("%f",&days);
months= days/30.0;
weeks= days/7.0;
years= days/365.0;
printf("Months: %f \n", months);
printf("Weeks: %f \n", weeks);
printf("Years: %f \n", years);
}
