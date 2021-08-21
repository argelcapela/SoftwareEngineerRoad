// write a program to inser a give number in middle of the array

#include <stdio.h>

int main()
{
	int i,n,num,pos,arr[20];
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}

	printf("\n Enter the number to be inserted :\n ");
	scanf("%d",&num);

	printf("\n Enter the position at which the num has to be added :\n");
	scanf("%d",&pos);

	//////////////////////////////////////////////
	for(i=(n-1); (i>=pos) ; (i--))
	{
		arr[i+1]=arr[i];
	}
	
		arr[pos]=num;
		n=n+1;
	/////////////////////////////////////////////


	printf("\nThe array after insertion of %d is: \n",num);
	
	for(i=0;i<n;i++)
	{
		printf("arr[%d]= %d \n",i,arr[i]);
	}

	printf("\n\n");

	return 0;
}

