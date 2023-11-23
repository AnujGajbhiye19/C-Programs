#include<stdio.h>
void main()
{
int sal;
float DA, HRA, Gross_sal;
printf("Enter Basic salary:");
scanf("%d",&sal);
DA=sal*0.4;
HRA=sal*0.2;
Gross_sal= sal + DA + HRA;
printf("Gross salary is: %f\n", Gross_sal);
}
