#include<stdio.h>
void main()
{
char d, q;
int y,sal;

printf("Enter department: ('i' for IT/'a' for Account/'h' for HR)");
scanf("%c",&d);

printf("\nEnter years of experience : \nEnter Qualification(g for graduate/ p for post graduate)\n");
scanf("%d %c",&y,&q);

if(d=='i')
{
	if (y<10)
	{
		if (q=='g')
		{
		sal=70000;
		}
		else
		{
		sal =100000;
		}

	}

	else
	{
		if (q=='g')
		{
		sal=100000;
		}
		else
		{
		sal =150000;
		}
	}

}


else if(d=='a')
{
	if (y<10)
		{
			if (q=='g')
			{
			sal=60000;
			}
			else
			{
			sal =100000;
			}

		}

		else
		{
			if (q=='g')
			{
			sal=90000;
			}
			else
			{
			sal =120000;
			}
		}

}


else if(d=='h')
{
	if (y<10)
		{
			if (q=='g')
			{
			sal=50000;
			}
			else
			{
			sal =90000;
			}

		}

		else
		{
			if (q=='g')
			{
			sal=80000;
			}
			else
			{
			sal =100000;
			}
		}
}
else
printf("\nInvalid Department");

printf("\nSalary is %d\n",sal);

}
