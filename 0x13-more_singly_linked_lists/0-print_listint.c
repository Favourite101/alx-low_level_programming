#include "lists.h"

/**
 * print_listint - prints listint_t list
 * @listint_t h: listint_t list
 *
 * Return: size_t size
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;

	return (size);
}
