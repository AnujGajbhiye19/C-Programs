#include<stdio.h>
void main()
{
int n,d1,d2,d3,d4,d5;
printf("Enter a 5 digit number : ")
scanf("%d",&n);

d5=n%10 +1;
n=n/10;
d4=n%10 +1;
n=n/10;
d3=n%10 +1;
n=n/10;
d2=n%10 +1;
n=n/10;
d1=n%10 +1;

printf("%d%d%d%d%d\n", d1,d2,d3,d4,d5);

}
