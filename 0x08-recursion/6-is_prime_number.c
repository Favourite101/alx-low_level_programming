#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - returns 1 for prime numbers
 * @n: number
 *
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
	{
		return (0);
	}

	return (check_prime(n, 2));
}

/**
 * check_prime - check if number is prime
 * @n: number to be checked
 * @i: checkers
 *
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		check_prime(n, i + 1);
	}
	return (1);
}
