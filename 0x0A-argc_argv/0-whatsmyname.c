#include <stdio.h>
#include "main.h"

/**
 * main - a program to print the name of this file
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
