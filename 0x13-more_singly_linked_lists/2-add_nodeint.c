#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a listint
 * @head: pointer to listint
 * @n: begin integer to be added
 *
 * Return: modified list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begin;

	begin = malloc(sizeof(listint_t));
	if (!begin)
		return (NULL);

	begin->n = n;
	begin->next = *head;
	*head = begin;

	return (begin);
}
