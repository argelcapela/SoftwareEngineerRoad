#include <stdio.h>
#include <stdlib.h>

struct project
{
	char name[50];
	char language[50];
};

void getProjectsInformation(int n,struct project* projectPtr);
void displayProjects(int n,struct project* projectPtr);


int main()
{
	struct project* projectPtr;
	int i,n=0;

	printf("Enter the number of projects to be registered:\n");
	scanf("%d",&n);
//	printf("%d",n);

	projectPtr = (struct project*) malloc(n*sizeof(struct project));

	getProjectsInformation(n,projectPtr);
	displayProjects(n,projectPtr);

	return 0;
};

void getProjectsInformation(int n,struct project* p)
{
//	printf("aaa%daaaa",n);
	for(int i=0;i<n;++i)
	{
		printf("\nProject %d enter the following values please\n",i+1);
		printf("1)NOME , 2)LANGUAGE:\n");
		scanf("%s %s",&(p+i)->name,&(p+i)->language);
//		printf("%s",(p+1)->name);
	
	}
};

void displayProjects(int n, struct project* p)
{

	printf("\n Projects inserted successfully: \n");

	for(int i=0;i<n;++i)
	{
		printf("Project %d:\n|NAME: %s\n|LANGUAGE: %s\n",i+1,(p+i)->name,(p+i)->language);

//		printf("%d",i);
	};
};
