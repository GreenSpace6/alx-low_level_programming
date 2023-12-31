#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		(return NULL);
	}

	new_node->data = n;
	new_node->next = *head;

	*head = new_node;

	(return new_node);
}


