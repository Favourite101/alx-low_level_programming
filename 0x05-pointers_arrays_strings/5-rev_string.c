#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, begin, count = 0;

	while (s[count])
	{
		count++;
	}
	begin = count - 1;
	while (begin >= 0)
	{
		for (i = 0; i <= count; i++)
		{
			*s[i] = s[begin];
			begin--;
		}
	}
	_putchar('\n');
}
