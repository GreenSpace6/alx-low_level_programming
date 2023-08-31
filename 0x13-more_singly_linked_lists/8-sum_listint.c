#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a liked list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{listint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->data;
		current_node = current_node->next;
	}

	(return sum);
}
