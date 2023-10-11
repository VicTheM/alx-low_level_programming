#include "function_pointers.h"

/**
 * print_name - prints name in certain format
 * @name: pointer to name to print
 * @f: function holding the print formay
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
