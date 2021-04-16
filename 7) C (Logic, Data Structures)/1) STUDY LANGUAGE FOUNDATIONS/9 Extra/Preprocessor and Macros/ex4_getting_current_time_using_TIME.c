#include <stdio.h>
int main()
{
	// pre-defined macros
	printf("Current time(__TIME__): %s\n",__TIME__);
	printf("Current date(__DATE__): %s\n",__DATE__);
	printf("Current file name(__FILE__): %s\n",__FILE__);

	printf("Current line number(__LINE__): %d\n",__LINE__);
	printf("Current *(__STDC__): %d\n",__STDC__);
	

}
