#include "main.h"

/**
 * factorial - returns factorial
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int prod;

	if (n <= 1)
	{
		return (1);
	}
	prod = n * factorial(n - 1);

	return (prod);
}
