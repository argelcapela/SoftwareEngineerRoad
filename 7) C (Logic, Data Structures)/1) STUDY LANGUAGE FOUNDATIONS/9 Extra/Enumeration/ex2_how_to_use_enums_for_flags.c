#include <stdio.h>

enum designFlags
{
	BOLD=1,
	ITALICS=2,
	UNDERLINE=4
};

int main()
{
	int myDesign=BOLD|UNDERLINE;

	// 00000001
	// 00000100
	// ________
	// 00000101

	printf("%d",BOLD);
	return 0;
}
