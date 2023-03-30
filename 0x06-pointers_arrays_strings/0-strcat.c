#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: pointer to be checked
 * @src: pointer to be checked
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int test_1 = 0, test_2 = 0;

	while (dest[test_1] != '\0')
		test_1++;
	while (src[test_2] != '\0')
	{
		dest[test_1] = src[test_2];
		test_1++;
		test_2++;
	}
	dest[test_1] = '\0';

	return dest;
}
