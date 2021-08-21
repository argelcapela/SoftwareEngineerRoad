#include <stdio.h>
int main()
{
// Learning about POINTERS:
int* intPtr;
int var = 10; //var is an integer variable which store the value 10;

printf("Address of var.%u\n",&var);
printf("Value of var:%d",var);

// assign the pointer to the address of variable
intPtr=&var;
printf("\nAddress of pointer intPtr:%u\n",intPtr);
printf("Value of pointer intPtr:%d\n\n",*intPtr);

//Change the value to 120
var=120;
printf("Address of pointer intPtr:%u\n",intPtr);
printf("Value of pointer intPtr:%d\n\n",*intPtr);

//Change value in pointer
*intPtr=2;
printf("Address of var:%u\n",&var);
printf("Value of var:%d\n\n",var);



return 0;
}
