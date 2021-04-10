/*#include <stdio.h>

int main()
{
int n;
double arr[100];
printf("Enter the number of elements (1 to 100):");
scanf("%d", &n);

for(int i=0;i<n;++i)
{
printf("Entering number [%d]:",i + 1);
scanf("%lf",&arr[i]);
}

// storing the largest number to arr[0]
for (int i=1;i<n;++i)
{
	if(arr[0] < arr[i])
	{
		arr[0]=arr[i];
	}
}

printf("Largest element = %.2lf", arr[0]);

return 0;
}
*/

// redo without see
#include <stdio.h>
int main()
{

int n;
int num[100];

printf("Enter the number of elements: ");
scanf("%d",&n);

for(int i=0;i<n;++i)
{
printf("Enter values: ");
scanf("%d",&num[i]);

}


// storing the largest number
for(int i=0;i<n;++i)
{
if(num[0] < num[i])
{num[0]=num[i];}

}

printf("THE LARGEST NUMBER IS: %d",num[0]);


return 0;
}
