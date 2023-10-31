#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <strings.h>
#include <stdio.h>

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, c;

	n = c = -1;
	if (!filename)
		return (-1);
	fd = creat(filename, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		n = write(fd, text_content, strlen(text_content));
		if (n < 0)
			return (-1);
	}
	c = close(fd);
	if (c < 0)
		return (-1);
	return (1);
}
