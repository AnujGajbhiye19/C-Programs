#include<stdio.h>
//#include<string.h>


void main()
{
char pass[30];
int len=0, i,n=0,c=0,s=0,sp=0;

printf("# Password length must be minimum 8 characters\n");
printf("# Password must contain at least one numerical value\n");
printf("# Password must contain at least one capital alphabet\n");
printf("# Password must contain at least one small alphabet\n");
printf("# Password must contain at least one special character\n\n\n");

printf("Enter password: ");
scanf("%s",pass);

for(i=0;pass[i]!='\0';i++)
	len++;

//printf("Length=%d\n",len);
if(len>=8)
{
for(i=0;i<len;i++)
{
	if(pass[i]>=48 && pass[i]<=57)
	{
	n=1;
	break;
	}
}
for(i=0;i<len;i++)
{
	if(pass[i]>=65 && pass[i]<=90)
	{
	c=1;
	break;
	}
}
for(i=0;i<len;i++)
{
	if(pass[i]>=97 && pass[i]<=112)
	{
	s=1;
	break;
	}
}
for(i=0;i<len;i++)
{
	if((pass[i]>=32 && pass[i]<=47) || (pass[i]>=58 && pass[i]<=64) || (pass[i]>=91 && pass[i]<=96) || (pass[i]>=123 && pass[i]<=126))
	{
	sp=1;
	break;
	}
}

if(n && c && s && sp)
	printf("Password is Valid\n");
else
	printf("Password is invalid\n");

}
else 
	printf("Invalid!!! Password length must be minimum 8 characters\n");

}
