#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len + 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
