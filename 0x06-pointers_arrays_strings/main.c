#include "main.h"
#include <stdio.h>


int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "world!\n";
	char *ptr;

	printf("%s\n", s1);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", ptr);
	printf("%s\n", s1);
	ptr = _strncat(s1, s2, 1024);
	printf("%s - %s", s1, ptr);

	return 0;
}
