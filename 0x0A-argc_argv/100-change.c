#include <stdio.h>
#include <stdlib.h>

/**
 * main - coins
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int coin, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin >= 25)
	{
		count += coin / 25;
		coin = coin % 25;
	}
	if (coin < 25 && coin >= 10)
	{
		count += coin / 10;
		coin = coin % 10;
	}
	if (coin < 10 && coin >= 5)
	{
		count += coin / 5;
		coin = coin % 5;
	}
	if (coin < 5 && coin >= 2)
	{
		count += coin / 2;
		coin = coin % 2;
	}
	if (coin < 2 && coin >= 1)
	{
		count += coin / 1;
		coin = coin % 1;
	}
	if (coin < 1)
	{
		count += 0;
	}
	printf("%d\n", count);

	return (0);
}
