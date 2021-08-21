#include <stdio.h>

void addOne(int* ptr)
{
(*ptr)++; // adding 1 to *ptr
}

int main()
{
	int* p,i;
	printf("Enter the number to be added one:\n ");
	scanf("%d",&i);

	p=&i;
	addOne(p);
	
	printf("\n ADRESS IS: %d", &p);
	printf("\n VALUE  IS: %d \n", *p); // 11
	
	return 0;
}
