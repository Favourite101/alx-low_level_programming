#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive integers
 * @argc: number of argguments
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	char c;
	
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			c = *argv[i];
			if (c >= 48 && c <= 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
