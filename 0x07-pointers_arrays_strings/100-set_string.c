#include "main.h"

/**
 * set_string - equates two strings
 * @s: double pointer to string out
 * @to: pointer to string in
 *
 * Return: void
 *
 */
void set_string(char **s, char *to)
{
	char *buffer = to;
	char **bucket = s;

	while (*buffer)
	{
		**bucket = *buffer;
		bucket++;
		buffer++;
	}
	**bucket = '\n';
}
