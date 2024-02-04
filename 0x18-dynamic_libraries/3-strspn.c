#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string
 * @accept: other string
 *
 * Return: common bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, targ, len = 0;

	for (i = 0; i != '\0'; i++)
	{
		targ = 0;
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				targ = 1;
			}
		}
		if (targ == 0)
		{
			return (0);
		}
	}
	return (len);
}
