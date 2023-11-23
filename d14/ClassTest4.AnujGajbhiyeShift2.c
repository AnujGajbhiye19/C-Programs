#include<stdio.h>
#include<string.h>
void main()
{
char str1[20], str2[20],sum1=0,sum2=0;
int i;

printf("Enter String 1: ");
scanf("%s",str1);
printf("Enter String 2: ");
scanf("%s",str2);

//printf("%d",('a'+'a'));


for(i=0;str1[i]!='\0';i++)
{
sum1=sum1+str1[i];
}

for(i=0;str2[i]!='\0';i++)
{
sum2=sum2+str2[i];
}

if(sum1==sum2)
{
printf("Both are Anagram of Each Other.\n");
}
else
	printf("Both are Not Anagram of Each Other.\n");

}
