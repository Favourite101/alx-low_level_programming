#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = abs(n);

	if (n >= 0 && n < 10)
	{
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar(n + '0');
	}
	else if (n < 0 && n > -10)
	{
		_putchar('-');
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar(45);
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}
