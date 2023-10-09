#include <stdlib.h>
#include <stdio.h>
char *create_arr(unsigned int len)
{
	char *arr;

	arr = malloc(sizeof(char) * len);
	if (arr == NULL)
		exit(98);
	return (arr);
}
/**
 * fill_arr - fills a char vector with products of chaar digits
 * @size: len of @dest, and > len of @src by 1
 * @dest: vector to fill
 * @src: vectyor holding digits to be multiplied
 * @mul: multiplier
 *
 * Return: void
 */
void fill_arr(unsigned int size, char *dest, char *src, char mul)
{
	int a, b, carry_over, product;
	unsigned int i;

	carry_over = 0;
	a = mul - '0';
	for (i = size - 1; i > 0; i--)
	{
		b = src[i - 1] - '0';
		product = a * b + carry_over;
		if (product > 9)
		{
			carrry_over = product / 10;
			dest[i] = (product % 10) + '0';
		}
		else
		{
			carry_over = 0;
			dest[i] = product + '0';
		}
	}
	if (carry_over != 0)
		*dest = carry_over + '0';
	else
		*dest = '0';
}
/**
 * not_digit - ensure a string is composed entirely of digits
 * @str: pointer to string buffer
 * @len: number of character checked
 *
 * Return: 0 - all digits, 1 - not all digits
 */
int not_digit(char *str, unsigned int *len)
{
	unsigned int c = 0;

	while(*(str + c))
	{
		if (str[c] < 48 || str[c] > 57)
			return (1);
		c++;
	}
	*len = c;
	return (0);
}


/**
 * validate - validate input
 * @argc: ncmd args
 * @argf: array of pointers to two wwords
 *
 * Return: void
 */
void validate(int arg, char *argf[], unsigned int *len1, unsigned int *len2)
{

	if (arg != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (not_digit(argf[1], len1) == 1 || not_digit(argf[2], len2) == 1)
	{
		printf("Error\n");
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	unsigned  int len1, len2, i, j, k;
	char *solx, result;

	j = 0;
	validate(argc, argv, &len1, &len2);
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	for (i = len2 - 1; i >= 0; i--)
	{
		solx = create_arr(len1 + 1);
		fill_arr(len1 + 1, solx, argv[1], argv[2][i]);
		result[len1 + len2 - j] = solx[len1];
		free(solx);



























