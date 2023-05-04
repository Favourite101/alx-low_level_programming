#include "lists.h"

/**
 * listint_len - returns the length of a listint
 * @h: listint
 *
 * Return: length of h
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h->next)
	{
		h = h->next;
		len++;
	}

	return (len);
}
