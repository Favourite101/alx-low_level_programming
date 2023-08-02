#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: head node
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *val = *head;
	listint_t *pres = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(val);
		return (1);
	}
	while (i < index - 1)
	{
		if (!val || !(val->next))
			return (-1);
		val = val->next;
		i++;
	}
	pres = val->next;
	val->next = pres->next;
	free(pres);

	return (1);
}
