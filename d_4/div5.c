#include<stdio.h>
void main()
{
int n,i,count=0;
printf("Enter a no: ");
scanf("%d",&n);

printf("Numbers divisible by 5 are: ");

for(i=1;i<=n;i++)
{
if(i%5==0)
{
count++;
printf("%d ",i);
}

}

printf("\ncount= %d \n",count);

}
