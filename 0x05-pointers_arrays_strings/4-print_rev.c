#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
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
		_putchar(r[begin]);
	}
	r[begin] = '\0';
	_putchar('\n');
}
