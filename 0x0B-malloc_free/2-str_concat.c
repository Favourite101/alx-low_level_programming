#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
/*	int i, j, len1 = 0, len2 = 0;
	char *catt;*/

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
/*	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	catt = malloc(sizeof(char) * (len1 + len2 + 1));
	if (catt == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			catt[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; j < len2; j++)
		{
			catt[i] = s2[j];
			i++;
		}
	}
	catt[i] = '\0';

	return (catt);*/
	return (s1);
}
