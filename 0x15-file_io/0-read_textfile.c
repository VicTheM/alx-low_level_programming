#include <stdint.h>
#include <limits.h>
#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fhandle;
	ssize_t ret_val, n;

	ret_val = n = -1;
	fhandle = open(filename, O_RDONLY);
	if (filename == NULL || fhandle < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	n = read(fhandle, buf, letters);
	close(fhandle);
	if (n < 0)
	{
		free(buf);
		return (0);
	}
	ret_val = write(STDOUT_FILENO, buf, n);
	free(buf);
	if (ret_val < 0 || ret_val != n)
		return (0);
	return (ret_val);
}
