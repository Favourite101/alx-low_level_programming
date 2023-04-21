#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - print all arguments
 * @format: format of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list app;

	va_start(app, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(app, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(app, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(app, double));
					break;
				case 's':
					str = va_arg(app, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;

			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(app);
}
