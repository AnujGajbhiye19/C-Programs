#include<stdio.h>
void main()
{

int nq,cq,iq,wc,wi,mo,tm;
float p;
char status[10];

printf("Enter no. of questions in the exam: ");
scanf("%d",&nq);

printf("\nEnter no. of correct questions given by student: ");
scanf("%d",&cq);

iq=nq-cq;

wc= 10;
wi= 5;
tm= nq*wc;

mo= (wc*cq)-(wi*iq);

p=mo*100.0/tm;

printf("Marks Obtained: %d",mo);
printf("\nPercentage Obtained: %f\n", p);
if(p>50){
printf("Status: Pass\n");
}
else
{
printf("Status: Fail\n");
}



}
