#include<stdio.h>
void main()
{
int a,b,ans,choice;
printf("Enter value of A & B: ");
scanf("%d %d",&a, &b);

printf("Enter choice(add=1; sub=2; mul=3; div=4)");
scanf("%d",&choice);

switch(choice)
{
case 1:
	ans=a+b;
	break;
case 2:
	ans=a-b;
	break;
case 3:
	ans=a*b;
	break;
case 4:
	ans=a/b;
	break;
}

printf("Answer is : %d\n",ans);

}
