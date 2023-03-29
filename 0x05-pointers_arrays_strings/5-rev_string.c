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
	i = count;
	while (begin >= 0)
	{
		while (i <= count)
		{
			s[i++] = s[begin--];
		}
	}
	_putchar('\n');
}
