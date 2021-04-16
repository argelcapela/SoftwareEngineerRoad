// swap elements using cyclic order
#include <stdio.h>
int* n1,*n2,*n3;

void cyclicSwap()
{
	int *temp;
	temp=n1;
	n1=n2;
	n2=n3;
	n3=temp;


}


int main()
{

// enter the number
printf("Enter the n1,n2,n3 in this order:\n");

scanf("%d %d %d",&n1,&n2,&n3);

//print before swap
printf("Before swap: \n %d \n %d \n %d \n",n1,n2,n3);

// swap
cyclicSwap();

// printf after swap
printf("After swap: \n %d \n %d \n %d \n",n1,n2,n3);



return 0;
}


