#include "main.h"
#include <stdio.h>
/**
 * first_char - finds char in string
 * @k: the char to search for
 * @s: pointer to string to search in
 * Description: serches for @k in @s
 * causes s to point to k in @s else null
 * at end of @S
 *
 */
char *first_char(char k, char *s)
{
	if (*s == '\0')
		return (s);
	if (*s == k)
		return (s);
	return (first_char(k, s + 1));
}


/**
 * jump_asterik - moves pointer to just after asterik
 * @s: pointer to asterik
 * Description: sets @s to after asterik
 *
 */
char *jump_asterik(char *s)
{
	if (*s != '*')
		return (s);
	return (jump_asterik(s + 1));
}


/**
 * wildcmp - compares two strings
 * @s1: plain string
 * @s2: var string that can contain *
 * Description: * represents any string of 
 * any length including  0 len.
 *
 * Return: 1 - identical, 0 - not identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (!(*s2 == '*' || *s1 == *s2))
	{
		return (0);
	}
	if (*s2 == '*')
	{
		s2 = jump_asterik(s2);
		printf("s2 after jump ast: %s\n", s2);
		if (*s2 == '\0')
			return (1);
		s1 = first_char(s2[0], s1);
		printf("s1 is: %s\n", s1);
		if (*s1 == '\0')
			return (0);
		return (wildcmp(s1, s2));
	}
	/* this code will never be executed */
	*s1 = *s2;
	return (5);
}
