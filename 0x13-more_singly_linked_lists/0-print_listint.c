#include "lists.h"

/**
 * print_listint - prints list
 * @h: list
 *
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (size);
}
