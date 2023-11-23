#include<stdio.h>
void main()
{
	int d, bp, fine;
	printf("Enter days, book price: ");
	scanf("%d %d", &d,&bp);

	if(d>0 && d<=30)
	{
		if (d<=5)
			fine=d*5;

		else if(d>5 && d<=10)
			fine= 25 + (d-5)*10;

		else if(d>10 && d<=30)
			fine= 25 + 50 + (d-10)*20;

	}


	else
	{
		fine= 25 + 50 + (d-10)*20;

		fine = fine>bp? fine: bp;

	}

	printf("Fine to be paid: %d\n",fine);

}
