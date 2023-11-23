#include<stdio.h>
void main()
{
int n,code,price,bill=0;
printf("** Code * Product  * Price/- **\n");
printf("** 101  * Burger   * 150/-   **\n");
printf("** 102  * Pizza    * 200/-   **\n");
printf("** 103  * Vadapav  * 30/-    **\n");
printf("** 104  * Sandwich * 100/-   **\n\n");

printf("Enter Quantity : ");
scanf("%d",&n);


for (int i=0;i<n;i++)
{

printf("Enter product code: ");
scanf("%d",&code);

switch(code)
{
case 101:
	price=150;
	break;
case 102:
	price=200;
	break;
case 103:
	price=30;
	break;
case 104:
	price=100;
	break;
default:
	i-=1;
	printf("\nInvalid code!!!\n");
	break;
}

bill= bill+ price;

}

printf("\nTotal Bill= Rs.%d/- \n",bill);

}
