#include<stdio.h>
void main()
{
int n,status=1;

printf("Enter a Number: ");
scanf("%d",&n);

for (int i=2;i<n;i++)
{
if(n%i==0)
{
status=0;
break;
}

}

if(status==1)
printf("This is a Prime Number.\n");
else
printf("This is not a Prime Number.\n");	

}
