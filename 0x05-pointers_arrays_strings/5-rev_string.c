#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int begin, count = 0, count1 = 0;
	char rev;

	while (s[count])
	{
		count++;
	}

	count1 = count - 1;

	for (begin = 0; begin < count / 2; begin++)
	{
		rev = s[begin];
		s[begin] = s[count1];
		s[count1--] = rev;
	}
}
