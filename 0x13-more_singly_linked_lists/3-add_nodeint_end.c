#include "lists.h"

/**
 * add_nodeint_end - inserts a node to the end of a linked list
 * @head: first element in the list
 * @n: new data
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *val;

	val = *head;
	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (val->next)
		val = val->next;
	val->next = end;

	return (end);
}
