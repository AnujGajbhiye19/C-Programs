#include<stdio.h>
void main()
{
float h,m,cm,in;
printf("Enter Height in feet: ");
scanf("%f",&h);
m=h*3.28;
cm=m*100;
in=h*12;
printf("Height in metre: %f\n",m);
printf("Height in metre: %f\n",cm);
printf("Height in metre: %f\n",in);
}
