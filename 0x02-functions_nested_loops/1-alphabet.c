#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Always alpha
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
