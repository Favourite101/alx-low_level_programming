#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines
 *
 * Return: Always void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
