#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node to the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be added in the node
 *
 * return: the address of the new element, or returns NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsiged int len = 0;

	whle (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if(!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}