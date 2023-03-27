#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: number
 */
int _strlen(char *s)
{
	int len;
	int i;

	for (i = 0; s[i]; ++i);

	return(i);
}
