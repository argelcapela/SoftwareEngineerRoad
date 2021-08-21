#include <stdio.h>
#include <stdlib.h>

struct person
{
	char name[20];
	int age;
	char password[10];
};

int main()
{
	int i,n;
	struct person *personPtr;

	// Enter the number of users:
	printf("Enter the number of users:\n");
	scanf("%d",&n);

	// Allocating
	personPtr=(struct person*)malloc(n*sizeof(struct person));

	// Inserting
	for(i=0;i<n;++i)
	{
		printf("Enter 1)NAME,2)AGE,3)PASSWORD of USER[%d]: \n",i);
		scanf("%s %d %s",&(personPtr+i)->name,&(personPtr+i)->age,&(personPtr+i)->password);
	
	}

	// Display
	for(i=0;i<n;++i)
		printf("USER[%d]: \t NAME:%s | AGE:%d | PASSWORD:%s\n",i,(personPtr+i)->name,(personPtr+i)->age,(personPtr+i)->password); 

	return 0;
}


