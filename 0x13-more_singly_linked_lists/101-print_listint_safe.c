#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: if the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head;

	if (head == NULL) {
		return 0;
	}

	while (current_node != NULL) {
		printf("%d\n, current_node->data);
		count ++;
		current_node = current_node->next;
	}
	return count;
}

