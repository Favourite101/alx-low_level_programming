#include "main.h"

/**
 * print_binary - print binary
 * @n: number to be converted
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int fave;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (fave = n, i = 0; (fave >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
