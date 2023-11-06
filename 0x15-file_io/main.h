#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void file_from_error(char *s, char *buf);
void file_to_error(char *s, char *buf);
void close_fd(int fd);
#endif /* _MAIN_H_ */
