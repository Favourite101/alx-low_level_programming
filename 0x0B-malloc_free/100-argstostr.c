#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of strings
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, counter = 0;
	char *favour;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			counter++;
		}
		counter++;
	}
	counter++;
	favour = malloc(sizeof(char) * counter);
	if (favour == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			favour[k] = av[i][j];
			k++;
		}
		favour[k] = '\n';
		k++;
	}
	favour[k] = '\0';

	return (favour);
}
