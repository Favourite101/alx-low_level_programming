#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a add node
 * @head: head node
 * @idx: index
 * @n: data
 *
 * Return: add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *add;
	listint_t *val = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
	for (i = 0; val && i < idx; i++)
	{
		if (i == idx - 1)
		{
			add->next = val->next;
			val->next = add;
			return (add);
		}
		else
			val = val->next;
	}

	return (NULL);
}
