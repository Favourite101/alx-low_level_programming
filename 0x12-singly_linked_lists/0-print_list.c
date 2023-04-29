#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list
 * @h: list containing elements
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
