#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all args
 * @n: number of arguments inputed excluding itself
 * @...: varargs
 *
 * Return: the summ of all varargs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int c;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
