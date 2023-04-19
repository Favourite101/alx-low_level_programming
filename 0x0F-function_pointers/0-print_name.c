#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name of person
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	int len = 0, i;

	while (name[len] != '\0')
		len++;
	f = malloc(sizeof(char) * (len + 1));
	if (f == NULL)
	{
		free(f);
		return;
	}
	for (i = 0; i < len; i++)
	{
		f[i] = name[i];
		_putchar(f[i]);
	}
	f[i] = '\0';
	_putchar(f[i]);
}
