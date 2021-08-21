#include <stdio.h>
//////////////////////////////////////////
void insertion_sort(int arr[],int n);

//////////////////////////////////////////////
void main()
{
int arr[20],i,n;
printf("\nEnter the number of elements in this array:  \n");
scanf("%d",&n);

printf("\nEnter the elements of the array: \n");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
///////////////////////////////
insertion_sort(arr,n);
	//////////////////////////////
	printf("\n The sorted array is: \n");

	for(i=0;i<n;i++)
	printf("%d \n",arr[i]);

	}
//*********************************************
void insertion_sort(int arr[],int n)
{
int i,j,temp;

for(i=1;i<n;++i)//start 1
{
//unsorted element
temp=arr[i];
j=i-1;//start 0
//sorted list
while((j>=0) && (temp<arr[j]))
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}


}



//*********************************************
