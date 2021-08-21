#include <stdio.h>

int main()
{
int i,POS,NUM,N,arr[10];

printf("\nEnter the number of elements in the array: ");
scanf("%d",&N);

printf("\nEnter the values of the elements: \n");
for(i=0;i<N;++i)
scanf("%d",&arr[i]);

printf("\nEmter the value to be inserted in the array: ");
scanf("%d",NUM);

printf("\nEnter the POSition to insert this element: ");
scanf("%d",POS);

////////////////////////////////
for(i=(N-1);i>=POS;--i)
arr[i+1]=arr[i];
arr[POS]=NUM;
++N;

///////////////////////////////
printf("The array after the element inserted is: ");
for(i=0;i<N;++i)
printf("Arr[%d]=%d",i,arr[i]);




return 0;

}
