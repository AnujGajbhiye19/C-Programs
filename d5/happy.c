#include<stdio.h>
void main()
{
int n,temp, rem, sum=0, status=0;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;

for(int i=0; i<10; i++)
{
sum=0;
while(n!=0)
{
rem= n%10;
n=n/10;
sum=sum+ rem*rem;
}
if(sum==1)
	break;
n=sum;

}

if(sum==1)
printf("This is a Happy number.\n");
else
printf("This is not a Happy number.\n");


}
