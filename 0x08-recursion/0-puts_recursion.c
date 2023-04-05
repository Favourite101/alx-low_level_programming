#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: pointer to string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
