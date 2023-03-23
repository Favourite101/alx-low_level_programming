#include <stdio.h>

/**
 * main - prints even fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long t1 = 0, t2 = 1, sum;
	float totsum;

	while (sum < 4000000)
	{
		sum =  t1 + t2;

		if ((sum % 2) == 0)
		{
			totsum += sum;
		}
		t1 = t2;
		t2 = sum;

	}
	printf("%.0f\n", totsum);

	return (0);
}
