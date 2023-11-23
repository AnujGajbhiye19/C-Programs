#include<stdio.h>

void main()
{
int a[2][2]={{0,1},{3,4}};
int *p;
p=&a[0][0];
printf("%d",*p);
p=p+1;
printf("%d",*p);
p=p+1;
printf("%d",*p);
p=p+1;
printf("%d",*p);

}
