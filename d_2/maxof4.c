#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter 4 numbers: ");
scanf("%d %d %d %d",&a,&b,&c,&d);

if(a>b && a>c && a>d)
	printf("%d is max\n",a);
else if(b>c && b>d)
	printf("%d is max\n",b);
else if(c>d)
	printf("%d is max\n",c);
else
	printf("%d is max\n",d);
}
