#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = s[i]; s[i] < '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
