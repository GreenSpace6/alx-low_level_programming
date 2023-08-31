#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: points to the first no in the linked list
 *
 * Return: no of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{size_t count = 0;
	listint_t *current_node = *h;
	listint_t *next_node = NULL;

	if (h == NULL || *h == NULL)
	{
		(return 0);
	}

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
		count++;
	}

	*h = NULL;

	(return count);
}
