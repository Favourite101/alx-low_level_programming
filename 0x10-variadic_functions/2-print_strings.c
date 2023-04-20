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
	unsigned int i, j;
	char *str;
	va_list app;

	if (separator == NULL)
		return;
	va_start(app, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(app, char *);
		if (str == NULL)
			printf("(nil)");
		else
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				printf("%c", str[j]);
			}
		}
		if (i == n - 1)
		{
			printf("\n");
			break;
		}
		printf("%s", separator);
	}
	va_end(app);
}
