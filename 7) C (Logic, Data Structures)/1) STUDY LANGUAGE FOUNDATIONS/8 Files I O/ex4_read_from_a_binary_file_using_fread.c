#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
	int n1,n2,n3;
};

int main()
{
	int n;
	struct threeNum num;
	FILE *fptr;

	if((fptr=fopen("/home/argelcapeladossantos/Documents/teste.bin","rb"))==NULL)
	{
		printf("Error! Opening file");
		// Program exits if the file pointer return NULL
		exit(1);
	}

	for(n=1;n<5;++n)
	{
		fread(&num,sizeof(struct threeNum),1,fptr);
		printf("n1:%d n2: %d n3: %d\n",num.n1,num.n2,num.n3);
	}
	fclose(fptr);
	
	return 0;
};
