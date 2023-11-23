#include<stdio.h>
void main()
{
char a;
printf("Enter a character: ");
scanf("%c",&a);

if(a>=65 && a<=90)
{
	printf("UPPERCASE!!!\n");
}
else if(a>=97 && a<=122)
{
	printf("lowercase!!!\n");
}
else if(a>=48 && a<=57)
{
	printf("Digit!!!\n");
}
else
{
	printf("invalid\n");
}
}
