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
	begin = count - 1;
	while (begin >= 0)
	{
		*s = s[begin];
		begin--;
	}
	_putchar('\n');
}
