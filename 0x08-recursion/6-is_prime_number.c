#include "main.h"
/**
 * prime_helper - checks for prime
 * @subject: test number
 * @divisor: denominator
 * Description: since is_prime_number receives just one
 * argument, this function expands it to two arguments
 *
 * Return: 1 (true ) 0 (false)
 */
int prime_helper(int subject, int divisor)
{
	if (divisor < 0)
		divisor *= -1;
	if (divisor == 0)
		return (0);
	if (divisor == 1)
		return (1);
	if (subject % divisor == 0)
		return (0);
	return (prime_helper(subject, divisor - 1));
}

/**
 * is_prime_number - checks if a num is prime
 * @n: number in question
 *
 * Return: 1 (true) or 0 (not prime)
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (prime_helper(-n, n + 1));
	else
		return (prime_helper(n, n - 1));
}
