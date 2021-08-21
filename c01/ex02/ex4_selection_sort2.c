#include <stdio.h>

int smallest(int arr[],int k,int n);
void selection_sort(int arr[],int n);

void main(int argc, char*argv[])
{
	int arr[10],i,n;

	printf("\nEnter the number of elements in the array:\n");
	scanf("%d",&n);

	printf("\nEnter the elements of the array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);

	///////////////////////////
	   selection_sort(arr,n);
	///////////////////////////
	
	printf("\nThe number sorted is:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}


/////////////////////////////////////////////////////////////////////////
int smallest(int arr[],int k,int n)
{
	int pos=k,small=arr[k],i;

	for(i=k+1;k<n;k++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}

	return pos;
}

int selection_sort(int arr[],int n)
{
	int pos,k,temp;

	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=pos;
		arr[pos]=temp;
	}
}


////////////////////////////////////////////////////////////////////////
