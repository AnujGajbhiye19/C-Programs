#include<stdio.h>
void main()
{
int i,j,r,c;
printf("Enter rows and columns of array: ");
scanf("%d %d",&r,&c);
int arr[r][c];

printf("Enter elements of the array:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]);

	//printf("\n");
}

printf("Array:");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
		printf("%d ",arr[i][j]);

	printf("\n      ");
}



printf("\n");
}
