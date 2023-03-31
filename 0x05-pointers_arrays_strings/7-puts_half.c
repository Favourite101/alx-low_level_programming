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

	for (n = 0; n <= length_of_the_string; n++)
	{
		if (n % 2 == 0)
		{
			if (length_of_the_string > 12)
			{
				for (n = length_of_the_string / 2; n <= length_of_the_string - 1; n++)
				{
					if (n == length_of_the_string)
						_putchar(str[n]);
					else
						_putchar(str[n + 1]);
				}
			}
			else
			{
				for (n = length_of_the_string / 2; n <= length_of_the_string - 1; n++)
				{
					_putchar(str[n]);
				}
			}
		}
		else
		{
			for (n = (length_of_the_string - 1) / 2; n <= length_of_the_string - 1; n++)
			{
				_putchar(str[n]);
			}
		}
	}
	_putchar('\n');

}
