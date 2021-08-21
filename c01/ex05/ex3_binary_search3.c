// create a program with a menu to fil la array and present options to insert a element in the middle of the array, delete a delete in the middle of the array, realize a binary search and sort descendind or ascending;

// just number for a while;
#include <stdio.h>
#include <stdlib.h>

int i,j,loop=1,op,num,arr[50],n,pos,mid,beg,end,found,temp;

void displayMenu();
void insertAnElement();
void deleteAnElement();
void orderArray(char or[10]);
void exitProgram();
void binarySearch();
void linearSearch();




void main()
{
printf("\n Enter the number of elements in the array please: ");
scanf("%d",&n);

printf("\n Enter values to be added into the array: \n");
for(i=0;i<n;++i)
scanf("%d",&arr[i]);

while(loop==1)
{
displayMenu();
}
}

void displayMenu()
{
	system("clear");
	printf("\n**************************\n");
	printf("ARR[]={");
		printf("%d",arr[0]);
	for(i=1;i<n;++i)
	{
		printf(",%d",arr[i]);
	}
	printf("}\n");
	printf("**************************\n");
	printf("1)Insert an Element;\n");
	printf("2)Delete an Element;\n");
	printf("3)Search an Element(Binary Search);\n");
	printf("4)Search an Element(Linear Search);\n");
	printf("5)Order in ASCENDING ORDER;\n");
	printf("6)Order in DESCENDING ORDER;\n");
	printf("7)Exit Program;\n\n");
	scanf("%d",&op);

	switch(op)
	{
	case 1:
		insertAnElement();
	break;
	case 2:
		deleteAnElement();
	break;

	case 3:
		binarySearch();
	break;

	case 4:
		linearSearch();
	break;

	case 5:
		orderArray("A");
	break;

	case 6:
		orderArray("D");
	break;

	case 7:
		exitProgram();
	break;
	default:
		printf("\nInvalid Option!\n");
	break;
	}

}

void insertAnElement()
{
printf("\nEnter the position you want to add the element:\n");
scanf("%d",&pos);

printf("\nEnter the value to be added into the array:\n");
scanf("%d",&num);

for(i=(n-1);i>=pos;--i)
arr[i+1]=arr[i];

++n;
arr[pos]=num;
	
}

void deleteAnElement()
{
printf("\nEnter the posicion of the element that you want to delete: ");
scanf("%d",&pos);

for(i=pos;i<n;++i)
arr[i]=arr[i+1];
--n;


}

void binarySearch()
{
	printf("\n\n");
	printf("Enter the number to be searched: \n");
	scanf("%d",&num);
	found=0,beg=0,end=n-1;
	orderArray("A");
	
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==num)
		{
		found=1;
		printf("\nThe number %d was found in the position %d",num,mid);
		break;		
		}
		else if(arr[mid]>num)
		end=mid-1;
		else
		beg=mid+1;
	}
		if(beg>end&&found==0)
		printf("\nThis element was not found try other values please!");

}

void linearSearch()
{
	printf("\nEnter the element you want to search:\n ");
	scanf("%d",&num);

	for(i=0;i<n;++i)
	{
		if(arr[i]==num)
		{
			printf("\nValue %d found in the position %d\n",num,i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("\nThis Element was not found!\n");
	}

}

void exitProgram()
{
	printf("\n Thanks for coming!\n ");
	loop=0;
}

void swap(){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}


void orderArray(char or[10])
{
	for(i=0;i<n;++i)
		for(j=0;j<n-1-i;j++)
		{			
			if(or=="A"&&arr[j+1]<arr[j])
			swap();
			else if(or=="D"&&arr[j+1]>arr[j])
			swap();				
		}

}


