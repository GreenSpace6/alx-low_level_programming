#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *@head:pointer to the first element in the list
 *@n: data insterted in the new element
 *
 * Return: pointer to the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{ /* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL) {
		return NULL;
	}

	/* int the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL) {
		*head = new_node;
	}
	else {
		/* Otherwise, find the last node in the list and add the new node after it */
		listint_t *last_node = *head;

	while(last_node->next != NULL) {
		last_node = last note->next;
	}
	last_node->next = new_node;
	}

	return new_node;
}
