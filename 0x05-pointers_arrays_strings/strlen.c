#include "main.h"

/* returns the length of a string as int */
/* is pointer to the first character which is same
 * as the name of char array */

int _strlen(char *s)
{
	int strlen = 0;
	short ii = 0;

	while(s[ii] != '\0')
	{
		strlen++;
		ii++;
	}
	return strlen;
}

