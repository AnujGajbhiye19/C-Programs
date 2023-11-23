#include<stdio.h>
void main()
{
int n, arm=0, rem=0, sum=0;
printf("Enter a number: ");
scanf("%d",&n);
arm=n;

while(n>0)
{
rem=n%10;
sum= sum +rem*rem*rem;
n/=10;

}
if (arm==sum)
	printf("This is an Armstrong number\n");
else
		printf("This is not an Armstrong number\n");
}
