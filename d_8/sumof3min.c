/*
#include<stdio.h>
void main()
{
int arr[6], temp,i,j,sumofmin;

printf("Enter array elements: ");
for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

for(i=0;i<6;i++)
{
	for(j=i+1;j<6;j++)
	{
		if(arr[j] < arr[i])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}

	}

}

sumofmin=arr[0]+arr[1]+arr[2];
printf("Sum of 3 minimum prices: Rs.%d.\n",sumofmin);

}
*/







#include<stdio.h>
void main()
{
int a,b,c,d,e,f,sum=0,min,i,j,midx;

printf("Enter 6 numbers : ");
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

int arr[6]= {a,b,c,d,e,f};

for(i=0;i<3;i++)
{
	min=100000;
	for(j=0;j<6;j++)
	{
		if(min>arr[j])
		{
			min=arr[j];
			midx=j;
			//printf("%d ",min);
		}
	
	}
	sum= sum+min;
	arr[midx]=100000;
	//printf("%d ",arr[midx]);
	//printf("%d \n",sum);
}

printf("Sum of 3 minimum prices: Rs.%d.\n",sum);


}











































