#include <stdio.h>

int main()
{
int i,POS,n,arr[10];
printf("\n Enter the number of elements of the array(at the most 10): ");
scanf("%d",&n);

printf("Enter the values of the array:\n");
for(i=0;i<n;++i)
{
	printf("Arr[%d]= ",i);
	scanf("%d",&arr[i]);
}

printf("\nEnter the POSITION of the element to be deleted: ");
scanf("%d",&POS);

//////////////////////////
for(i=POS;i<(n-1);++i)
{
	arr[i]=arr[i+1];
}
n--;

/////////////////////////
printf("The array after the element deleted is: \n");
for(i=0;i<n;++i)
{
	printf("arr[%d]=%d\n",i,arr[i]);

}


}
