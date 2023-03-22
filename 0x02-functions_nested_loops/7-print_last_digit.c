#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @f: parameter to be checked
 *
 * Return: last digit
 */
int print_last_digit(int f)
{
	int last;

	last = f % 10;
	if (f < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');

	return (last);
}
