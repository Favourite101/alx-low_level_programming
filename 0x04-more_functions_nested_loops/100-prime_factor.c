#include <stdio.h>
#include <math.h>

/**
 * main - prints HPF
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	int n;
	int root = sqrt(num);

	for (n = root; n >= 1; n++)
	{
		if (num % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}

	return (0);
}
