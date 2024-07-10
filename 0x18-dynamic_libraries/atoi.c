#include "main.h"

/**
 * change_state - Changes the state
 * @s: pointer
 * @num: integer in string
 *
 * Return: state
 */
int change_state(char *s, int num)
{
	int state = 0;

	if (num == 0)
	{
		char *str = s;

		while (*(str + 1))
		{
			if (*(str + 1) >= 48 && *(str + 1) <= 57)
				state = 1;
			str++;
		}
	}
	return (state);
}

/**
 * _atoi - Convert a string to an integer.
 * @s: pointer
 *
 * Return: number in string.
 */
int _atoi(char *s)
{
	int state = 1;
	unsigned int num = 0;
	int i = 0, sign = 1, len = 0;

	while (s[len] != '\0')
		len++;
	while (state && i < len)
	{
		int  c = *(s + i);
		int n = c - 48;

		if (c == 45)
			sign *= -1;
		else if (c == 43 || c == 32)
			sign *= 1;
		else if (c >= 48 && c <= 57)
		{
			char *str = s + i;

			while (*(str + 1) && *(str + 1) >= 48 && *(str + 1) <= 57)
			{
				n *= 10;
				str++;
			}
			num += n;
		}
		else
		{
			state = change_state((s + i), num);
		}
		i++;
	}
	return (num * sign);
}
