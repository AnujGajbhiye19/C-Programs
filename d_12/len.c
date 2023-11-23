#include<stdio.h>
#include<string.h>
void mystrlen(char *s)
{
int len=0;
while(*s!='\0')
{
len++;
s++;
}
printf("Length is: %d\n",len);
}

void main()
{
char str[]="spark";
int len;
len = strlen(str);
printf("Length is: %d\n",len);
mystrlen(str);

}
