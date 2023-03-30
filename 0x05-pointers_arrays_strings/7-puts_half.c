#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;

	while (str[length_of_the_string])
	{
		length_of_the_string++;
	}

	if (n % 2 == 0)
	{
		for (n = 0; n <= length_of_the_string / 2; n++)
		{
			_putchar(str[n]);
			_putchar('\n');
		}
	}
	else
	{
		for (n = 0; n <= (length_of_the_string - 1) / 2; n++)
		{
			_putchar(str[n]);
			_putchar('\n');
		}
	}

}
