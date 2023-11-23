#include<stdio.h>
void main()
{
int n,i,a,odd=0,even=0,pv=0,nv=0,zr=0;
printf("Enter a no: ");
scanf("%d",&n);

printf("Enter %d numbers: ",n);

for(i=1;i<=n;i++)
{
scanf("%d",&a);

if(a%2!=0)
	odd++;
if(a%2==0)
	even++;
if(a>0)
	pv++;
if(a<0)
	nv++;
if(a==0)
	zr++;

}

printf("odd count= %d \n",odd);
printf("even count= %d \n",even);
printf("Positive count= %d \n",pv);
printf("Negeative count= %d \n",nv);
printf("Zero count= %d \n",zr);

}
