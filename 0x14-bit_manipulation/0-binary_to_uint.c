#include "main.h"

/**
* binary_to_uint - converts binaray to unsigned int
* @b: binary number to be converted
*
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res, pow;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (pow = 1, res = 0, i--; i >= 0; i--, pow *= 2)
	{
		if (b[i] == '1')
			res += pow;
	}

	return (res);
}
