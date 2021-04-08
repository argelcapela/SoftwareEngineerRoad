#include <stdio.h>

int  main()
{

int n,i,arr[15];

printf("\n Enter the number of elements in the array:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\n arr[%d] = ",i+1);
	scanf("%d",&arr[i]);	
}

	printf("\n The array elements are: \n ");
for(i=0;i<n;i++)
	printf("\t arr[%d] = %d \n",i+1,arr[i]);


return 0;
}
