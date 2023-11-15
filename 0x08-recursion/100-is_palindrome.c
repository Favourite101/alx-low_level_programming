#include "main.h"

int get_length(char *s);
int check_pal(char *s, int j, int length);

/**
 * is_palindrome - checks if a word is a palindrome
 * @s: pointer to string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, get_length(s)));
}

/**
 * get_length - get the length of the string
 * @s: string
 *
 * Return: length
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + get_length(s + 1));
}

/**
 * check_pal - checks if its a palindrome
 * @s: string
 * @j: checker
 * @length: length of string
 *
 * Return: 1 or 0
 */
int check_pal(char *s, int j, int length)
{
	if (*(s + j) != *(s + length - 1))
	{
		return (0);
	}
	if (j >= length)
		return (1);

	return (check_pal(s, j + 1, length - 1));
}
