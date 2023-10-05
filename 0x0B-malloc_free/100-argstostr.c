#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Argument Counter.
 * @av: Argument Vector.
 *
 * Return: SUCCESS: pointer, FAILURE: NULL.
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, len = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len += strlen(av[i]);
		len += 1;
		i++;
	}
	args = (char *)malloc(sizeof(char) * (len + 1));
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k] = '\n';
		k++;
	}
	return (args);
}
