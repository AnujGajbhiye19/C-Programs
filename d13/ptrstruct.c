#include<stdio.h>

struct student
{
char name[40];
int rollno;
};

void main()
{
struct student s1,*p;
p=&s1;

printf("Enter name and rollno. of 1st student : ");
scanf("%s",p->name);
scanf("%d",&p->rollno);


printf("Name and Rollno. of 1st student :\n%s : %d\n",(*p).name,(*p).rollno);



}
