#include <stdio.h>

int main()
{
/*
int r,c,a[100][100], b[100][100],sum[100][100],i,j;
printf("Enter the number of rows (between 1 and 100");
scanf("%d",&r);

printf("Enter the number of columns (between 1 and 100)");
scanf("%d", &c);

printf("\nEnter elements of st matrix: \n");
for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{	
		printf("Enter element a%d%d: ", i+1,j+1);
		scanf("%d", &a[i][j]);
	}

	printf("Enter elements of 2nd matrix: \n");
for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		printf("Enter element b2%d%d: ", i+1,j+1);
		scanf("%d",&b[i][j]);
	}

// adding two matrices
for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		sum[i][j]=a[i][j]+b[i][j];
	}

for(i=0;i<r;++i)
	for(j=0;j<c;++j){
	printf("%d  ", sum[i][j]);

		if(j==c -1){
				printf("\n\n");
		}
	}

//printing the result
printf("\n Sum of two matrices: \n");
for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		printf("%d  ", sum[i][j]);
		if(j==c -1)
		{
			printf("\n\n");
		}
	}
*/
// made without look
// adding two matrices
int i,j, m1[100][100],m2[100][100],sum[100][100],c,l;

// size of matrices

//columns
printf("\nEnter the number of columns:\n ");
scanf("%d",&c);

//lines
printf("\nEnter the number of lines:\n ");
scanf("%d",&l);

// values of matriz1
printf(" \n Enter the values of 1st matriz: \n ");
for(i=0;i<c;++i)
	for(j=0;j<l;++j)
	{
		printf("Matriz 1[%d][%d]",i ,j);
		scanf("%d",&m1[i][j]);
	}

// values of matriz2
printf("\n Enter the vlaues of 2st matriz: \n");
for(i=0;i<c;++i)
{
	for(j=0;j<l;++j)
	{
		printf("Matriz 2[%d][%d]",i,j);
		scanf("%d",&m2[i][j]);
	}

}


// sum
for(i=0;i<c;++i)
	for(j=0;j<l;++j)
	{
		sum[i][j]=m1[i][j]+m2[i][j];
	}

// show matriz sum
printf("\n\n");
printf("Here are your matriz summed:\n ");

for(i=0;i<c;++i)
{
	for(j=0;j<l;++j)
	{
		printf(" %d ",sum[i][j]);
	}
printf("\n");
}

return 0;
}
