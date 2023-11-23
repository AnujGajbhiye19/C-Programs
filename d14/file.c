#include<stdio.h>
void main()
{
	char ch;
	FILE *fp;
	fp= fopen("a.txt","r");

	while(1)
	{
		ch=getc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}

}
