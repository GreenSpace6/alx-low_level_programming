#include "lists.h"

/**
 * pop_listint - deletes the head note of a linked list, and return the head
 * @head: pointer to the first element
 *
 * Return: the data inside the element that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{ listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
	{
		(return 0);
	}

	node = *head;
	n = node->data;
	*head = node->next;
	free(node);

	(return n);
}
