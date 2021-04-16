#include <stdio.h>

int main()
{
int variable1=9,
    variable2=4,
    result;

printf("variable 1 : %d\n",variable1);
printf("variable 2 : %d\n",variable2);
	
result = variable1+variable2;
printf("variable1+variable2 = %d\n",result);

result = variable1-variable2;
printf("variable1+variable2= %d\n",result);

result = variable1*variable2;
printf("variable1*variable2=%d\n",result);

result = variable1/variable2;
printf("variable1/variable2=%d\n",result);

result = variable1%variable2;
printf("Reminder when variable1 is divided by variable2=%d\n",result);

return 0;
}
