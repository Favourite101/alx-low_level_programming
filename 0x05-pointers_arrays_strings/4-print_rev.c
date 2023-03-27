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

	for (s[i] = '\0'; i < s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
