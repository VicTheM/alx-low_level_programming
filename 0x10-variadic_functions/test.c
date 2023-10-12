#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *str = "m  i\0name";
	char *sstr = (void *)0;
	int c = 0;
	int i = 0;

	while (str[c])
	{
		printf("%d\n", c + 1);
		c++;
	}
	printf("\n\n");
	while (*(sstr + i))
	{
		printf("%d\n", i + 1);
		i++;
	}
	printf("the end!\n");

	return (0);
}
