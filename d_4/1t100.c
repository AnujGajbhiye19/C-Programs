#include<stdio.h>
void main()
{
for (int i=1;i<=100;i++)
{
printf("%d ",i);
}

for (int i=100;i>=1;i--)
{
printf("%d ",i);
}

int n;
printf("\n enter a no. :");
scanf("%d",&n);

for (int i=1;i<=n;i++)
{
int a= i*i;
printf("%d ",a);
}


}
