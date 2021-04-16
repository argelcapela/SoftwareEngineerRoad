#include <stdio.h>
#include <string.h>

int main()
{
	char str1[]="abcd", str2[]="abcd", str3[]="abcdf";
	int result;

	// comparing string str1 and str2
	result=strcmp(str1,str2);
	printf("strcmp(str1,str2)=%d\n",result);

	// comparing string str1 and str 3
	result=strcmp(str1,str3);
	printf("strcmp(str1,str3)=%d\n",result);

	return 0;
}
