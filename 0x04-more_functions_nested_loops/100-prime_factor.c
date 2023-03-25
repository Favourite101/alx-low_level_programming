#include <stdio.h>

/**
 * main - prints HPF
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int n, factor;
	int i, test_prime = 1;

	for (n = num; n >= 1; n--)
	{
		if (num % n == 0)
		{
			for (i = 2; i < n; i++)
			{
				if (n % i == 0)
				{
					test_prime = 0;
				}
			}
			if (test_prime == 1)
			{
				factor = n;
				break;
			}
		}
	}
	printf("%lu\n", factor);

	return(0);
}
