#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string separating the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list app;

	va_start(app, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(app, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i == n - 1)
		{
			printf("\n");
			break;
		}
		if (separator)
			printf("%s", separator);
	}
	va_end(app);
}
