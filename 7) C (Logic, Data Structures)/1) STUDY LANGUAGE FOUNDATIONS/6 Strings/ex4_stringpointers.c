#include <stdio.h>

int main()
{

	//without pointer:
	char name[]="Harry Potter";
	printf("%c\n",*name);
	printf("%c\n",*(name+1));
	printf("%c\n",*(name+7));
	printf("\n");

	// with colchetes:
	printf("%c\n",name[0]);
	printf("%c\n",name[1]);
	printf("%c\n",name[7]);
	printf("\n");



	// with pointer:
	char *namePtr;
	namePtr=name;
	printf("%c\n", *namePtr);
	printf("%c\n", *(namePtr+1));
	printf("%c\n", *(namePtr+7));
	printf("\n");



	//without pointer just <string> + integers
	printf("%c",name);
	printf("%c",name+1);
	printf("%c",name+7);
	printf("\n");


	return 0;

}
