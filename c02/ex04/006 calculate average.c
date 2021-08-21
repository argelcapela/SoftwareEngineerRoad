// store numbers and calculate the average using array;

#include <stdio.h>
int main()
{
/*
	int n,i;
	float num[100], sum = 0.0, avg;

	printf("Enter the numbers of elements: ");
	scanf("%d", &n);

	while( n > 100 || n< 1)
	{
		printf("Error! number shound in range of (1 to 100)");
		printf("Enter the number again: ");
		scanf("%d",&n);
	}

	for (i=0;i<n;++i)
	{
		printf("%d. Enter number: ", i+1);
		scanf("%f", &num[i]);
		sum+=num[i];
		//printf("%d %d %d \n",sum,i,num[0]);
	}

	avg = sum / n;
	printf("Average = %.2f", avg);
*/

//without look | calculate the average with arrays:
int n,i;
float num[100],avg=0.0,sum;

printf("Enter the number of elements: ");
scanf("%d",&n);

// just number between 100 and 1
while(n > 100 &&  n > 1)
{
	printf("Error! Just a amount between (1 - 100); ");
	printf("Enter the number of elements agan:");
	scanf("%d",&n);
}


// enter and calculate
printf("Enter the values:\n ");
for(i=0;i<n;++i)
{
scanf("%f",&num[i]);
sum+=num[i];
}

avg = sum / n;
printf("The average is: %.2f", avg);

return 0;
}
