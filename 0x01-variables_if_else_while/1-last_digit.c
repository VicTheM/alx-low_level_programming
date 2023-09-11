#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: always 0 fofr success
 */
int main(void)
{
	int n;
	int zero = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, (n%10));
	if (n == 0)
		printf("%d\n", zero)
	else if (n < 6)
		printf("less than 6 and not 0") 
	else if (n > 5)
		printf("greater than %d\n", 5)
	return (0);
}
