#include <stdio.h>

/**
 * display - displays text before the main func executes
 */
void __attribute__((constructor)) display(void)
{
	char *ptr;
	char str[100] = "You're beat! and yet, you must allow,\n";

	ptr = str + 40;
	ptr = "I bore my house upon my back!\n";
	printf("%s%s", str, ptr);
}
