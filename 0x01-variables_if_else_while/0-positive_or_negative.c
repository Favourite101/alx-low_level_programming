#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/* more headers goes there */
=======
>>>>>>> dbda3e8b78cc9885283a2d761b354c3a6ade6728

/**
 * main - prints sign of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
