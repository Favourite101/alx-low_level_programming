#include <stdio.h>

/**
 * _isupper - checks if letter is uppercase
 *@c: parameter to be tested

 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
