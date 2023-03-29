#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int begin, count = 0;

	while (s[count])
	{
		count++;
	}
	for (begin = count - 1; begin >= 0; begin--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
