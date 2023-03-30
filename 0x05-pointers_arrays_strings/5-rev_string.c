#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int begin, count = 0;
	char rev;

	while (s[count])
	{
		count++;
	}
	for (begin = count - 1; begin >= 0; begin--)
	{
		*rev = s[begin];
	}
	for (i = 0; i < len / 2; i++)
			{
						tmp = s[i];
								s[i] = s[len1];
										s[len1--] = tmp;
											}
	/*_putchar('\n');*/
}
