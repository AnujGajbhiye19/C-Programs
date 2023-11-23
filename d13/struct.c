#include<stdio.h>

struct student
{
char name[40];
int rollno;
};

void main()
{
struct student s1,s2,s[5];

printf("Enter name and rollno. of 1st student : ");
scanf("%s",s1.name);
scanf("%d",&s1.rollno);

printf("Enter name and rollno. of 2nd student : ");
scanf("%s",s2.name);
scanf("%d",&s2.rollno);

printf("Enter name and rollno. of next 5 student : ");
for(int i=0;i<5;i++)
{
scanf("%s",s[i].name);
scanf("%d",&s[i].rollno);
}

printf("Name and Rollno. of all students are : \n");
printf("%s : %d\n",s1.name,s1.rollno);
printf("%s : %d\n",s2.name,s2.rollno);
for(int i=0;i<5;i++)
{
printf("%s : %d\n",s[i].name,s[i].rollno);
}


}
