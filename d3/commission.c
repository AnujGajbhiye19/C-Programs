#include<stdio.h>
void main()
{

char i;
printf("Choose CPU/Monitor(Enter c or m): ");
scanf("%c",&i);

int amt;
printf("Enter amount: ");
scanf("%d",&amt);

float comoc,comom;
if(i=='c')
{
if(amt>0 && amt<= 10000)
{
comoc=0;
}
else if(amt>10000 && amt<=25000)
{
comoc= amt*0.08;
}
else
{
comoc= 2000+ (amt-25000)*0.1;
}

printf("\nCommision on CPU: %f\n",comoc);
}


else if(i=='m')
{
if(amt>0 && amt<= 10000)
{
comom=0.05*amt;
}

else
{
comom= 0.05*10000 + (amt-10000)*0.08;
}

printf("Commision on Monitor: %f\n",comom);
}


else
{
printf("Invalid item\n");
}

}
