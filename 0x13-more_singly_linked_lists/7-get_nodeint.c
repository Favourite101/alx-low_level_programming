#include "lists.h"

/**
 * get_nodeint_at_index - finds a node
 * @head: head node
 * @index: index of node
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *val;
    
    val = head;
	while (val && i < index)
	{
		val = val->next;
		i++;
	}
    if (val == NULL)
        return (NULL);
    else
	    return (val);
}
