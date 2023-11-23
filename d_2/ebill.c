#include<stdio.h>
void main()
{
	int use,phase,units;
	float scharge,ptax,tbill;

	printf("Enter '0' for Domestic or '1' for Comercial Bill: ");
	scanf("%d",&use);
	printf("\nEnter '1' for single phase or '3' for 3-phase: ");
	scanf("%d",&phase);
	printf("\nEnter no. of units consumed: ");
	scanf("%d",&units);

	if (units>0)
	{
		if(use==0)
		{
			scharge=10;
			if(phase==1)
			{
				ptax=0.06*units;
				ptax=ptax<20?20:ptax;
				tbill=scharge+ptax;
			}
			else
			{
				ptax=0.06*units;
				ptax=ptax<50?50:ptax;
				tbill=scharge+ptax;
			}
			if(units>0 && units<=50)
				tbill+= units*1.45;
			else if(units>50 && units<=100)
				tbill+= 50*1.45 +(units-50)*2.85;
			else if(units>100 && units<=200)
				tbill+= 50*1.45 + 50*2.85 + (units-100)*3.95;
			else
				tbill+= 50*1.45 + 50*2.85 + 100*3.95 + (units-200)*4.5;
		
		printf("\nTotal Electricity Bill is Rs.%f\n\n",tbill);
		}



		else
		{
			scharge=20;
			if(phase==1)
			{
				ptax=0.06*units;
				ptax=ptax<50?50:ptax;
				tbill=scharge+ptax;
			}
			else
			{
				ptax=0.06*units;
				ptax=ptax<100?100:ptax;
				tbill=scharge+ptax;
			}

			if(units>0 && units<=100)
					tbill+= units*3.95;
			else
				tbill+= 100*3.95 + (units-100)*7;
			printf("\nTotal Electricity Bill is Rs.%f\n\n",tbill);
		}
	}
	else
	{
	printf("Invalid Input...\n");
	}
}
