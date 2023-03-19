#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Return: always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (!(x == y && x == z && y == z) && x - y < 0 && y - z < 0)
				{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
