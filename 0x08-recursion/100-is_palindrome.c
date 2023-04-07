#include "main.h"

char *reverse_string(char *s, int length, int i);
int get_length(char *s, int i);

/**
 * is_palindrome - checks if a word is a palindrome
 * @s: pointer to string
 *  Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = get_length(s, i);
	char *rev = reverse_string(s, length, i);

	if (*s == *rev)
	{
		rev++;
		is_palindrome(s++);
		return (1);
	}

	return (0);
}

/**
 * reverse_string - reverses a string
 * @s: string
 * @length: length of string
 * @i: checker
 *
 * Return: reversed string
 */
char *reverse_string(char *s, int length, int i)
{
	char temp;

	if (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - i];
		s[length - i] = temp;
		reverse_string(s, length, i + 1);
	}
	return (s);
}

/**
 * get_length - get the length of the string
 * @s: string
 * @i: checker
 *
 * Return: length
 */
int get_length(char *s, int i)
{
	if (s[i] != '\0')
	{
		get_length(s, i + 1);
	}

	return (i);
}
