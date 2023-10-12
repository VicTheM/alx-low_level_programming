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

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		buffer = va_arg(ap, int);
		printf("%d", buffer);
		if (seperator != NULL)
			printf("%c", seperator[0]);
	}
	printf("\n");
	va_end(ap);
}
