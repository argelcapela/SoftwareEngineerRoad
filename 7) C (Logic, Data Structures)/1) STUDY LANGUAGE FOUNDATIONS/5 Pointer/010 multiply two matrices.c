#include <stdio.h>

// function to get elements entered by the user
void getMatrixElements(int matrix[][10],int r, int c)

{
for(int i=0;i<r;++i)
	for(int j=0;j<c;++j)
	{
		printf("\n[%d][%d]: ",i,j);
		scanf("%d",&matrix[i][j]);
	}
}

// function to multiply the two matrices
void multiplyMatrices(int first[][10],int second[][10],int result[][10],int r1,int c1,int r2,int c2)
{
for(int i=0;i<r1;++i)
	for(int j=0;j<c1;++j)
	{
		result[i][j]=first[i][j]*second[i][j];
	}

}

// display the multiplied matrix
void display(int result[][10],int r1,int c1)
{
	for(int i=0;i<r1;++i)
	{	
		for(int j=0;j<c1;++j)
		{
			printf(" %d ",result[i][j]);	
		}
		printf("\n");
	}
}

int main()
{
// initializing main variables we will use in this program
int first[10][10], second[10][10],result[10][10],r1,c1,r2,c2;

// enter the number of columns and row of the matrices
printf("Enter rows and columns for the 1st matirx:\n");
scanf("%d %d",&r1,&c1);

printf("Enter row and columns for the 2nd matrix: \n");
scanf("%d %d",&r2,&c2);

// verify if the two matrices have the same amout of col and row
while(c1!=r2)
{
printf("Error! Enter rows and columns again. \n");

printf("Enter rows and columns for the 1st matrix: \n");
scanf("%d %d",&r1,&c1);

printf("Enter rows and columns for the 2st matrix: \n ");
scanf("%d %d",&r2,&c2);

}


// get elements of the first matrix
printf("Enter the values of the 1st matrix: ");
getMatrixElements(first,r1,c1);

// get elements of the 2st matrix
printf("Enter the values of the 2st matrix: ");
getMatrixElements(second,r2,c2);

// multiply two matrices
multiplyMatrices(first,second,result,r1,c1,r2,c2);

// display the result
display(result,r1,c2);

return 0;
}
