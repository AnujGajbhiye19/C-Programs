#include<stdio.h>

struct student
{
int rollno;
char name[10]
char dept[10]
char course[10];
int joining;
//struct student *next;
}

void main()
{
struct student s[10];
for(int i=0;i<10;i++)
{
printf("Student %d: ",i);
printf("Enter Roll No: ");
scanf("%d",&s[i].rollno);
printf("Enter Name: ");
scanf("%d",s[i].name);
printf("Enter Department: ");
scanf("%d",s[i].dept);
printf("Enter Course: ");
scanf("%d",s[i].course);
printf("Enter YearOfJoining: ");
scanf("%d",&s[i].joining);
}



}
