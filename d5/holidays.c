#include<stdio.h>
void main()
{
int n,festival,holidays=0,count=0;

printf("Enter no. of holidays: ");
scanf("%d",&n);

//printf("Enter dates of Holidays(within 1to30): ");


for(int i=1;i<=n;i++)
{
printf("Enter date: ");
scanf("%d",&festival);

if((festival%7) == 6 ||  (festival%7) ==0)
	{
	count++;
	}

}

holidays =8+n-count;

printf("No. of Holidays: %d\n",holidays);
}
