#include <stdio.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int t1 = 1, t2 = 2;
	int sum = t1 + t2;
	
	printf("%d, %d, ", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", sum);
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;
	}
	printf("\n");

	return (0);
}
