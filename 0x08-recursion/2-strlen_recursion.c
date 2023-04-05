#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: pointer to string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	i++;
	_strlen_recursion(s + 1);

	return (i);
}
