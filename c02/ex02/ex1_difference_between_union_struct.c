#include <stdio.h>

union unionJob
{
	//defining a union
	char name[32];
	float salary;
	int workerNo;
} uJob;

struct structJob
{
	char name[32];
	float salary;
	int workerNo;
} sJob;

int main()
{
/*	printf("size of union = %d bytes", sizeof(uJob));
	printf("\nsize of structure = %d bytes", sizeof(sJob));

	printf("\n\n");
*/
	printf("UNION: %d \n|NAME:%d \n|SALARY: %d \n|WORKERNO: %d \n",sizeof(sJob),sizeof(sJob.name),sizeof(sJob.salary),sizeof(sJob.workerNo));

	printf("\n");

	printf("STRUCT:%d\n|NAME: %d\n|SALARY: %d\n|WORKERNO: %d\n",sizeof(uJob),sizeof(uJob.name),sizeof(uJob.salary),sizeof(uJob.workerNo));
	printf("\n");


	return 0;
}

