#include<stdio.h>
void main()
{
int x,y,r;
printf("Enter value of x and y: ");
scanf("%d%d",&x,&y);
r=x*x + y*y + 2*x*y - 10;
printf("x*x + y*y + 2*x*y - 10 = %d\n",r);
}
