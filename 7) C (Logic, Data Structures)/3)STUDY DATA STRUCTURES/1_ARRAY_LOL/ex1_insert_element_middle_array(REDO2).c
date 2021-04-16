#include <stdio.h>

void insertAnElement(int N,int POS,int NUM,int arr[]);
void deleteAnElement(int N,int POS,int arr[]);


int main()
{
	int i,n,NUM,POS,N,arr[10],loop=1,op;

	printf("Enter the number of elements to the array please: ");
	scanf("%d",N);

	printf("Enter the values to this array: ");

	for(i=0;i<N;++i)
	{
		printf("Arr[%d]= ",i);
		scanf("%d",arr[i]);
	}

	do
	{
		printf("What do you want to do with this array? \n 1)Insert an element\n 2) Delete an element: \n");
		scanf("%d",op);
		
	if(op==1)
	{
	// 1) add an element in the array:
	inserAnElement(N,POS,NUM,arr);


	}else{
	// 2) delete an element in the array:
	deleteAnElement(N,POS,NUM);
	}

	}while(loop==1);

	
}
