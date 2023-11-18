#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: pointer to be checked
 * @src: pointer to be checked
 *
 * Return: a pointer to the resulting string 
 */
char *_strcat(char *dest, char *src)
{
	int test = 0, test2 = 0;

	while (dest[test] != '\0')
	{
		test++;
	}
	while (src[test2] != '\0')
	{
		dest[test] = src[test2];
		test2++;
		test++;
	}
	dest[test] = '\0';

	return (dest);
}
