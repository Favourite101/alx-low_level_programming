#include "main.h"

/**
 * binary_to_unit - converts from binary to int
 * @b: constant character
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, len, two = 2, i;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '1' || b[len] != '0')
			return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			res += pow(two, len);
		len--;
	}

	return (res);
}
