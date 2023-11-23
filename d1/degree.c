#include<stdio.h>
void main()
{
float F,C;
printf("Enter temperature in ferenhite: ");
scanf("%f",&F);
C=(F-32)*5/9.0;
printf("Temp. in centigrade: %f\n",C);
F=C*9/5.0 +32;
printf("Temp. in ferenhite: %f\n",F);

}
