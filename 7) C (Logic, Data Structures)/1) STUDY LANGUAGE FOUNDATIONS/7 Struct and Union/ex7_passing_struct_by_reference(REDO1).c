#include <stdio.h>

typedef struct Student
{
	char name[50];
	float grade;

} student;

void gradeAverage(student s1,student s2, float* avg);

int main()
{
	float avg;
	student s1,s2;

	printf("Enter with the values of student 1 | 1)NAME 2)GRADE:\n");
	scanf("%s %f",&s1.name,&s1.grade);

	printf("Enter with the values of student 2 | 1)NAME 2)GRADE:\n");
	scanf("%s %f",&s2.name,&s2.grade);

	gradeAverage(s1,s2,&avg);
	printf("The AVERAGE of the studends in this class is:\n %.2f\n",avg);

	return 0;
}

void gradeAverage(student s1,student s2,float* avg)
{
	*avg=((s1.grade+s2.grade)/2);

}
