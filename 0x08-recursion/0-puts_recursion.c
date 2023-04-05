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

	if (s[i] == '\0')
		return;
	_putchar(*s);
	_putchar('\n');
	_puts_recursion(s + 1);
}
