#include <stdio.h>

int main()
{
	int data[5];

	// enter elements:
	printf("\nEnter the elements:\n");
	for (int i=0;i<5;++i)
	{
		scanf("%d",data + i);
	}

	// print elements:
	printf("\nHere are the elements:\n");
	for (int i=0;i<5;++i)
	{
		printf("%d\n",*(data + i));
	}

}
