#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Always void
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}

