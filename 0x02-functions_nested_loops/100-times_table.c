#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the multiplication table for n
 * @n: parameter to be checked
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int times = i * j;

				if (j != 0)
				{
					if (times < 10)
					{
						printf(",   ");
					} else if (times >= 10 && times < 100)
					{
						printf(",  ");
					} else if (times >= 100)
					{
						printf(", ");
					}
				}
				printf("%d", times);
			}
			printf("\n");
		}
	}
}
