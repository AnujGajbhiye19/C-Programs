#include<stdio.h>
void main()
{
	float pi=3.14;
	float l,b,r;
        printf("Enter length, breadth, redius: ");
	float ar,p,ac,cc;
	scanf("%f %f %f",&l,&b,&r);
	ar=l*b;
	p=2*(l+b);
	cc=2*pi*r;
	ac=pi*r*r;
	printf("Area of rectangle: %f\n",ar);
	printf("Perimeter of rectangle : %f\n",p);
	printf("Area of crcle: %f\n",ac);
	printf("Preimeter of circle: %f\n",cc);
}
