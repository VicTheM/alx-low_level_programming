#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints @n numbers with @seperator seperator
 * @seperator: delimiter in printed number
 * @n: the number of numbers to print
 * @...: varargs
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	int buffer;
	unsigned int c;

	if (n > 0)
	{
		va_start(ap, n);
		if (seperator == NULL)
			seperator = "";
		for (c = 0; c < n - 1; c++)
		{
			buffer = va_arg(ap, int);
			printf("%d%s", buffer, seperator);
		}
		printf("%d\n", va_arg(ap, int));
	}
	va_end(ap);
}
