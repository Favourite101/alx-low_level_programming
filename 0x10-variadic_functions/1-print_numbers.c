#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers
 * @separator: string that separates the characters
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list app;

	if (separator == NULL)
		return;
	va_start(app, n);
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(app, int));
		if (i != n - 1)
			printf(", ");
	}
	_putchar('\n');
	va_end(app);
}
