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
	unsigned int len = 0;

	while (str[len])
		len++;
	tbr = malloc(sizeof(list_t));
	if (!tbr)
		return (NULL);
	tbr->str = strdup(str);
	tbr->len = len;
	tbr->next = (*head);
	(*head) = tbr;

	return (*head);
}
