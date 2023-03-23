#include <stdio.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long t1 = 1, t2 = 2;
	unsigned long sum = t1 + t2;

	printf("%lu, %lu, ", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		printf("%lu", sum);
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;
		if (i == 50)
		{
			printf("\n");
		} else
		{
			printf(", ");
		}
	}
	return (0);
}
