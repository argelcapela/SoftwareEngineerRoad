#include <stdio.h>

int partition(int a[],int beg,int end);
void quick_sort(int a[],int beg,int end);

int main()
{
	int a[20],n;

	printf("\nEnter the number of elements inside the array:\n");
	scanf("%d",&n);

	printf("\nEnter the elements of the array: \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

	/////////////////////////
  	 quick_sort(a,0,n-1);
	/////////////////////////
	
	printf("\nThe sorted array is: \n");
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
int partition(int a[],int beg,int end)
{
	int left,right,temp,loc,flag;
	loc=left=beg;
	right=end;
	flag=0;

	while(flag!=1)
	{
		while((a[loc]<=a[right])&&(loc!=right))
			right--;

		if(loc==right)
			flag=1;
		else if(a[loc]>a[right])
		{
			temp=a[loc];
			a[loc]=a[right];
			a[right]=temp;
			loc=right;
		}

		if(flag!=1)
		{
			while((a[loc]>=a[left])&&(loc!=left))
			left++;

			if(loc==left)
			flag=1;
			else if(a[loc]<a[left])
			{
				temp=a[loc];
				a[loc]=a[left];
				a[left]=temp;
				loc=left;
			}
		}
	}

	return loc;
}


void quick_sort(int a[],int beg,int end)
{
	int loc;

	if(beg<end)
	{
		loc=partition(a,beg,end);
		quick_sort(a,beg,loc-1);
		quick_sort(a,loc+1,end);
	}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////
