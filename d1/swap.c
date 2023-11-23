#include<stdio.h>
void main()
{
int c,d,t;
printf("Enter value of c and d");
scanf("%d %d",&c,&d);
t=c;
c=d;
d=t;
printf("Interchanged Values are:\n");
printf("C=%d\n",c);
printf("D=%d\n",d);
}



