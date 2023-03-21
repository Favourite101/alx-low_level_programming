#include <stdio.h>

/**
 * main - prints all possible combinations of two numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x != y && x - y < 0)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
