// sum of numbers again but now lets analize better:

#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,n,sum=0,*ptr,p=1;

printf("Enter the number of elements: ");
scanf("%d",&n);

// allocando n elements in the memory;
ptr = (int*) malloc(n*sizeof(int));
//ptr = (int*) calloc(n,sizeof(int));


while(p==1)
{
//sizeof(type): return the size in bytes of a type of variable/data;
//(type*): type of the pointer of return;
printf("PTR foi iniciado, seus valores são: \n");

for(i=0;i<n;++i)
{
	printf("PTR[%d]:%d -> %d \n",i,ptr+i,*(ptr+i));
}

printf("Enter the values to be summated:");

for(i=0;i< n;++i)
{
	scanf("%d",ptr+i);
	printf("PTR[%d] = VALUE: %d = END: %d\n",i,*(ptr+i),ptr+i);
	sum+=*(ptr+i);
}

printf("The sum is: \n %d \n",sum);


for(i=0;i < n;++i)
{

	printf("PTR[%d]:%d -> %d \n",i,*(ptr+i),ptr+i);
}


printf("Continuar? 0 no  |  1 yes");
scanf("%d",&p);
if(p==0)
return 0;

printf("Enter a new amount of numbers do you want to sum?");
scanf("%d",&n);
ptr=realloc(ptr,n*sizeof(int));
sum=0;

printf("TESTE SE DIMINUINDO OS OUTROS DA RELEASE:");
for(i=0;i<5;++i)
{
	printf("PTR[%d]:%d -> %d \n",i,ptr+i,*(ptr+i));
}


}
free(ptr);

return 0;
}
