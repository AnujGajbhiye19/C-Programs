#include<stdio.h>
char grade(int m)
{
	if(m>90 && m<=100)
		return 'A';
	if(m>80 && m<=90)
		return 'B';
	if(m>60 && m<=80)
		return 'C';
	if(m>50 && m<=60)
		return 'D';
	if(m>=40 && m<=50)
		return 'E';
	if(m<40)
		return 'F';
}

void main()
{
	int m;
printf("Enter marks: ");
scanf("%d",&m);
printf("Grade: %c\n",grade(m));

}
