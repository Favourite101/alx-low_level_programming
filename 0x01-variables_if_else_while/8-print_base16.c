#include <stdio.h>

int main(void)
{
	int hex;

	for(hex = 0; hex <= 9; hex++)
	{
		putchar((hex%10) + '0');
	}
	
	for(hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
