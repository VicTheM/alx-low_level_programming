#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main func
 * @argc: num of args
 * @argv: array of pointerss to args
 *
 * Return: int signifying exit status
 */
int main(int argc, char *argv[])
{
	int op1, op2, result;
	char *operator;
	int (*funcc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	operator = argv[2];

	funcc = get_op_func(operator);
	if (funcc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = funcc(op1, op2);
	printf("%d\n", result);

	return (0);
}
