#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all arguments
 * @n: first argument
 *
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(app, n);
	for (i = 0; i < n; i++)
		sum += va_arg(app, int);
	va_end(app);

	return (sum);
}
