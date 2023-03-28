#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int begin, end, count = 0;
	char r[1000];

	while (s[count] != '\0')
	{
		count++;
	}
	end = count - 1;
	for (begin = 0; begin <= count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
	_putchar('\n');
}
