#include<stdio.h>
void main()
{
int a,b,c,d,e;
float agr, prcent;
printf("Enter marks obtained in 5 subjects (0-100): ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
agr=(a+b+c+d+e)/5.0;
prcent= (a+b+c+d+e)/5.0;
printf("Aggregate marks: %f\n",agr);
printf("Percentage: %f\n",prcent);
}
