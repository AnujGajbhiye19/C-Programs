#include<stdio.h>
void main()
{
float dist, in, mt, cm, ft;
printf("Enter distance in meters: ");
scanf("%f",&dist);
in= dist*39370.1;
mt= dist*1000;
cm= dist*100000;
ft= dist*3280.84;
printf("Distance in inches: %f\n", in);
printf("Distance in meter: %f\n", mt);
printf("Distance in centimeters: %f\n", cm);
printf("Distance in feets: %f\n", ft);
}
