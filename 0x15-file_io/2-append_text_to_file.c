#include <string.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - ...
 * @filename: name of file
 * @text_constant: text to append
 *
 * Return: 1 - success, -1 - failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, k, j;

	fd = -1;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	k = strlen(text_content);
	n = write(fd, text_content, k);
	if (n == -1)
		return (-1);

	j = close(fd);
	if (j == -1)
		return (-1);
	return (1);
}
