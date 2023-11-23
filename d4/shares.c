#include<stdio.h>
void main()
{
int n=1, bp,q,sp,  obp,osp,  profit,  o_profit=0;

while(n!=0)
{
printf("Enter Share Buying Price, Quantity, Selling price: ");
scanf("%d %d %d",&bp,&q,&sp);

obp= bp*q;
osp=sp*q;
profit= osp - obp;
printf("Profit: Rs.%d \n",profit);

o_profit += profit;

printf("Do you want to buy more(Enter '1' for yes & '0' for no): ");
scanf("%d",&n);
}

printf("Your Overall Profit is Rs.%d \n",o_profit);

}
