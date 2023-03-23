#include <stdio.h>

/**
 * main - prints even fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long t1 = 1, t2 = 2, sum, totsum;

	for (sum = 0; sum <= 4000000; sum++)
	{
		t1 = t2;
		t2 = sum;
		sum =  t1 + t2;

		if (sum % 2 == 0)
		{
			totsum += sum;
		}
	}
	printf("%lu\n", totsum);

	return (0);
}
