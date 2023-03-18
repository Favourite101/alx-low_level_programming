#include <stdio.h>

int main(void)
{
	char mixed;

	for(mixed = 'a'; mixed <= 'z'; mixed++)
	{
		putchar(mixed);
	}
	
	for(mixed = 'A'; mixed <= 'Z'; mixed++)
	{
		putchar(mixed);
	}
	putchar('\n');
	return (0);
}		
