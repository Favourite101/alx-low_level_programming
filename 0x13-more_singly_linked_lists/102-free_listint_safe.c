#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: head node
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int num;
	listint_t *val;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			val = (*h)->next;
			free(*h);
			*h = val;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
