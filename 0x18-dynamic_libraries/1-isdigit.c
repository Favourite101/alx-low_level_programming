#include "main.h"

/**
 * _isdigit - Check if character is a number
 * @c: The number to be checked
 *
 * Return: 1 for digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
