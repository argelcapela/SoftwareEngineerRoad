#include <stdio.h>

int main()
{
int i,n,temp,j,arr[10];
printf("\n Enter the number of elements in the array: ");
scanf("%d",&n);

for(i=0;i<n;++i)
{	
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
}

printf("\n");

////////////////////////////////////////////////////

for(i=0;i<(n-1);++i)
{
	printf("I: %d",i);
	for(j=0;j<n-i-1;++j)
	{
		if(arr[j] >  arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			
	
		}
			printf(" J:%d \n",j);
	}

}
////////////////////////////////////////////////////

printf("\n The arrya sorted in ascending order is: ");

for(int i=0;i<n;++i)
	printf("\narr[%d]=%d",i,arr[i]);

printf("\n\n");
return 0;
}
