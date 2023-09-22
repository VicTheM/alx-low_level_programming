#include "main.h"
#include <stdio.h>
/*
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}*/

int main(void)
{
	/*
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);

	int a[] = {1, 2, 3, 4, 5};
	print_array(a, sizeof(a)/sizeof(int));
	reverse_array(a, sizeof(a)/sizeof(int));
	print_array(a, sizeof(a)/sizeof(int));
	*/
	char str[] = "look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return 0;
}
