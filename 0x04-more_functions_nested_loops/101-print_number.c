#include "main.h"
#include <math.h>
#include <stdlib.h>

/**
 * print_number - prints integers
 * @n: number to be checked
 *
 * Return: number
 */
void print_number(int n)
{
	unsigned int f = abs(n);
	int a = f % 10;

	if (n < 0)
	{
		_putchar('-');
		if (f / 10)
		{
			print_number(f / 10);
		}
		_putchar(a + '0');
	}
	else
	{
		if (n / 10)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
}
