#include<stdio.h>
void main()
{
int gs, s, ti;
float tax;

printf("Enter Gross salary and savings: ");
scanf("%d %d",&gs,&s);

s= s>100000? 100000: s;

ti= gs-s;
printf("Taxable income: %d\n",ti);

if(ti>0 && ti<=100000)
{
tax=0;
}
else if(ti>100000 && ti<=200000)
{
tax=(ti-100000)*0.1;
}

else if(ti>200000 && ti<=500000)
{
tax=100000*0.1 + (ti-200000)*0.2;
}

else
{
tax=100000*0.1 + 300000*0.2 + (ti-500000)*0.3;
}

printf("Total Payable tax is %f\n",tax);

}
