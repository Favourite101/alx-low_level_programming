#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: maiin string
 * @accept: other string
 *
 * Return: common bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag, f = 0;

	for (i = 0; i != '\0'; i++)
	{
		flag = 0;
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		//if (flag == 0)
		//{
		//	return (0);
		//}
	}
	return (f);
}
