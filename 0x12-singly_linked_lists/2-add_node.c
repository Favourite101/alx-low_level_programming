#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a list
 * @head: address of where the node is to be added
 * @str: what is to be added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tbr;

	if (str == NULL)
		return (NULL);
	else
	{
		**head->str = strdup(str);
		tbr = *head;
	}

	return (tbr);
}
