#include <stdio.h>

/**
 * main - print 0 to 9 using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
