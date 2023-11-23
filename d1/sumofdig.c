#include<stdio.h>
void main()
{
int n, d1,d2,d3,d4,d5,r;
scanf("%d",&n);

//printf("%d",n);
int s;
d5=n%10;
n=n/10;
d4=n%10;
n=n/10;
d3=n%10;
n=n/10;
d2=n%10;
n=n/10;
d1=n%10;
s= d1+d2+d3+d4+d5;
printf("sum is %d\n",s);
printf("Reverse of number by direct method is %d%d%d%d%d\n",d5,d4,d3,d2,d1);

r=d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
printf("Reverse of number by mathematical method : %d\n",r);

}
