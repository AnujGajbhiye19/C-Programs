#include<stdio.h>
void main()
{
int P,M,W,L, LM, LW, ILM, ILW;
printf("Enter population of town: ");
scanf("%d",&P);

M=P*52/100;
W=P*48/100;
L=P*48/100;

LM=M*35/100;
LW=L-LM;

ILM=M-LM;
ILW=W-LW;

printf("Number of illiterate men: %d\n",ILM);
printf("Number of illiterate women: %d\n",ILW);
}
