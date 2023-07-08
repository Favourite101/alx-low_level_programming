#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
