#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer
 *
 * Return: void
 */
 void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
	{
		**s = to[i];
		s++;
	}
}
