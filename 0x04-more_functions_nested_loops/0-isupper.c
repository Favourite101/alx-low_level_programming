#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 *@c: parameter to be tested

 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
