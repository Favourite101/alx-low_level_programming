#include "main.h"

int check_sqrt(int, int);

/**
 * _sqrt_recursion - return square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(n, 0));
}

/**
 * check_sqrt - check for square root
 * @n: number
 * @i: possible values
 *
 * Return: -1 or square root
 */
int check_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (check_sqrt(n, i + 1));
}
