#include "lists.h"

/**
 * sum_listint - adds all the data
 * @head: head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *val = head;

	while (val)
	{
		sum += val->n;
		val = val->next;
	}

	return (sum);
}