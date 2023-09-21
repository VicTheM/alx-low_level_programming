#include "main.h"
#include <stdio.h>


int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
/*	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
*/
	return 0;
}
