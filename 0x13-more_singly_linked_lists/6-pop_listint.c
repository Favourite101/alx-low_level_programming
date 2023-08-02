#include "lists.h"

/**
 * pop_listint - pop head node
 * @head: pointer to head node
 *
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *val;
	int pos;

	if (!head || !*head)
		return (0);
	pos = (*head)->n;
	val = (*head)->next;
	free(*head);
	*head = val;

	return (pos);
}