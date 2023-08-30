#include "lists.h"

/**
 * listint_t - returns the no of elements in linked lists
 * @h: type of listint_t to transverse
 *
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
