#include "lists.h"
/**
 * print_listint_safe - prints a linked list safely
 * @head: head node
 *
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *val1 = NULL;
	const listint_t *val2 = NULL;
	size_t idx = 0;
	size_t new;

	val1 = head;
	while (val1)
	{
		printf("[%p] %d\n", (void *)val1, val1->n);
		idx++;
		val1 = val1->next;
		val2 = head;
		new = 0;
		while (new < idx)
		{
			if (val1 == val2)
			{
				printf("-> [%p] %d\n", (void *)val1, val1->n);
				return (idx);
			}
			val2 = val2->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (idx);
}
