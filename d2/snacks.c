#include<stdio.h>
void main()
{
int b,p,s;
float tbill, tb,tp,ts;
printf("Enter quantity of burger, pizza, sandwich: ");
scanf("%d %d %d",&b,&p,&s);

tb= 150*b;
tp= 300*p;
ts= 100*s;

if(b>5){
tb= tb*0.9;
}

if(tp>1000){
tp= tp*0.85;
}

if(ts>500){
ts= ts*0.8;
}

tbill= tb+tp+ts;
printf("Total bill without GST: Rs.%f",tbill);

tbill*= 1.12;
printf("Total bill with GST: Rs.%f",tbill);


}
