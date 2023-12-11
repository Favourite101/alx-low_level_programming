#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *val;

	if (head == NULL)
		return;
	while (*head)
	{
		val = (*head)->next;
		free(*head);
		*head = val;
	}
	*head = NULL;
}
