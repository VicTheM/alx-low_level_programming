#include "main.h"

/**
 * str_len - get len of string and point to null
 * @s: string buffer
 *
 * Return: num of char in s excluding terminating null
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * odd_palindrome - is_palindrome for str of odd len
 * @s: pointer to srt
 * @len: len of str
 * Description: this function only works for odd strings
 * with len > 2
 *
 * Return: 1 True - 0 False
 */
int odd_palindrome(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	if (len == 1)
		return (1);
	return (odd_palindrome(s + 1, len - 2));
}

/**
 * even_palindrome - is_palindrome for str of even len
 * @s: poiinter to str
 * @len: len of str
 *
 * Return: 1 True - 0 False
 */
int even_palindrome(char *s, int len)
{
	if (len == 0)
		return (1);
	if (s[0] == s[len - 1])
		return (even_palindrome(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks id a string is palindrome
 * @s: pointer to string
 *i
 * Return: 1 - true, 0 - false
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len == 0 && *s == '\0')
		return (1);
	if (len == 1)
		return (0);
	if (len % 2 == 0)
		return (even_palindrome(s, len));
	else
		return (odd_palindrome(s, len));
}
