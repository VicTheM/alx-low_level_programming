#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints data of tuype chat, int, float and string
 * @format: connstant pointer to constant character
 */
void print_all(const char *const format, ...)
{
	va_list inputs;
	unsigned int c = 0;
	char del[3] = {',', ' ', '\0'};
	char *str;

	va_start(inputs, format);
	while (format != NULL && format[c] != '\0')
	{
		if (*(format + 1 + c) == '\0')
			del[0] = '\0';
		switch (*(format + c))
		{
			case 'c':
				printf("%c%s", (char)va_arg(inputs, int), del);
				break;
			case 'i':
				printf("%d%s", va_arg(inputs, int), del);
				break;
			case 'f':
				printf("%f%s", va_arg(inputs, double), del);
				break;
			case 's':
				str = va_arg(inputs, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", str, del);
				break;
		}
		c++;
	}
	va_end(inputs);
	printf("\n");
}
