#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h:linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current_node = h;

	if (h == NULL)
	{
		(return 0);
	}

	while (current_node != NULL)
	{
		printf("%d\n", current_node->data);
		count++;
		current_node = current_node->next;
	}

	(return count);
}
