#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Print n amount of numbers, separated by the separator string
 * @separator: The string to pring between numbers
 * @n: Number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	char *str;

	i = 0;
	va_start(nums, n);
	while (i < n)
	{
		str = va_arg(nums, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nums);
}
