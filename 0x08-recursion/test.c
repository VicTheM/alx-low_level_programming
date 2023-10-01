#include "main.h"
#include <stdio.h>
/**
 * wildcmp - Compare two strings allowing for wildcard char
 * @s1: static string
 * @s2: String that can take *
 *
 * Return: 1 True, 0 False
 */
int wildcmp(char *s1, char *s2, int n)
{
	printf("iterstion number: %d\n", n);
	printf("s1: %s\ts2: %s\n", s1, s2);
	if (*s1 == '\0' && *s2 == '\0')
	{
		printf("gotcha! - 1, n is: %d\n", n);
		return (1);
	}
	if (*s1 == *s2)
	{
		printf("*s1 == *s2, n is: %d\n", n);
		return (wildcmp(s1 + 1, s2 + 1, n + 1));
	}
	if (*s2 == '*')
	{
		printf("*s2 is * when n is: %d\n", n);
		if (*(s2 + 1) == '*')
		{
			printf("s2 + 1 == *, n is: %d\n", n);
			return (wildcmp(s1, s2 + 1, n + 1));
		}
		if (wildcmp(s1 + 1, s2, n + 1) || wildcmp(s1, s2 + 1, n + 1))
		{
			printf("I am done, n is: %d\n", n);
			printf("s1: %s\ts2: %s\n", s1, s2);
			return (1);
		}
	}
	return (0);
}
