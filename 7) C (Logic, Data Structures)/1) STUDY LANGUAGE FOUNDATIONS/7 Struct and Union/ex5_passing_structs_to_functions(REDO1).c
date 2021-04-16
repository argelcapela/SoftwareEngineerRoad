#include <stdio.h>

struct student
{
	char name[50];
	int age;
	float grade;
	char password[50];

};

void display(struct student s);

int main()
{
	struct student s1;

	// Enter values:
	printf("Enter the values of the student:\n 1)NAME 2)AGE 3)GRADE 4)PASSWORD: \n");
	scanf("%s %d %f %s",&s1.name,&s1.age,&s1.grade,&s1.password);

	// Pass to function:
	display(s1);

	return 0;
};

void display(struct student s)
{
	printf("Student inserted successfully!");
	printf("\n|NOME:%s\n | AGE:%d\n | GRADE:%f\n | PASSWORD:%s\n",s.name,s.age,s.grade,s.password);

};

