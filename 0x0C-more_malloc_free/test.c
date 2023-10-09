#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *str;
	int a;

	str = "123456789";

	a = str[5] - '0';
	printf("%s\n%d\n", str, a);

	return (0);
}
