#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int begin, count = 0;

	while (s[count])
	{
		count++;
	}
	for (begin = count - 1; begin >= 0; begin--)
	{
		*s = s[begin];
	}
	_putchar('\n');
}
