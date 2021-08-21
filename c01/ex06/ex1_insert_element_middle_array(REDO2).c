#include <stdio.h>

void displayElements();
void insertAnElement();
void deleteAnElement();
int i,n,NUM,POS,N,arr[10],loop=1,op;

int main()
{


	printf("Enter the number of element in this array : ");
	scanf("%d",&N);

	printf("Enter the values to this array: \n");

	for(i=0;i<N;++i)

	{
		printf("\nArr[%d]= ",i);
		scanf("%d",&arr[i]);
	}

	do
	{
		printf("What do you want to do with this array? \n 0)Display elements \n 1)Insert an element\n 2) Delete an element\n 3)Sair\n:");
		scanf("%d",&op);
		
	if(op==0)
	{
	displayElements();
	}
	else if(op==1)
	{
	// 1) add an element in the array:
	insertAnElement();


	}else if(op==2){
	// 2) delete an element in the array:
	deleteAnElement();
	} else if(op==3)
	{
		loop=0;
	}else{
	printf("Invalid Option!");
	loop=0;
	}


	}while(loop==1);

	
	return 0;
}

void insertAnElement()
{
printf("1)Inserting Elements\n please enter the position:\n");
scanf("%d",&POS);
printf("Please enter the value you want to add\n");
scanf("%d",&NUM);

//////////////////////////
for(i=(N-1);i>=POS;--i)
arr[i+1]=arr[i];

++N;
arr[POS]=NUM;
/////////////////////////

displayElements();
};

void deleteAnElement()
{
printf("Enter the position you want to delete: \n");
scanf("%d",&POS);

//////////////////////
for(int i=POS;i<(N-1);++i)
arr[i]=arr[i+1];

--N;
///////////////////////
displayElements();
};

void displayElements()
{
	printf("The table is like this: ");	

	printf("\n\n");
	for(int i=0;i<N;++i)
	{
			printf("Arr[%d]=%d \n",i,arr[i]);
	}
	printf("\n\n");
};


