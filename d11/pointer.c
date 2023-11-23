#include<stdio.h>
void main()
{
	int arr[10]= {00,10,20,30,40,50,60,70,80,90};
	int *p;
	p=arr;
	printf("%d\n",*p);
	p=p+1;
	printf("%d\n",*p);
	*p=(*p) +5;
	printf("%d\n",*p);
	p=p+5;
	printf("%d\n",*p);
}
