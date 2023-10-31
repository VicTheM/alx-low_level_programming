#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		n = write(fd, text_content, strlen(text_content));
		if (n < 0)
			return (-1);
	}
	return (1);
}
