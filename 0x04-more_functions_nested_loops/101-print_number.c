#include "main.h"

/**
 * print_number - prints integers
 * @n: number to be checked
 *
 * Return: number
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
