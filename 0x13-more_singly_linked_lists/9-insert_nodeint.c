#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a linked list
 * @head: pointer to the first node in the list
 * @idx: where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{ if (head == NULL) {
	return NULL;
		    }
listint_t *new_node = malloc(sizeof(listint_t));
new_node->data = n;
new_node->next = NULL;

if (idx == 0) {
	new_node->next = *head;
	*head = new_node;
	return new_node;
}

listint_t *current_node = *head;
for (unsigned int i = 0; i < idx - 1; i++) {
	return NULL;
}
current_node = current_node->next;
}
if (current_node == NULL) {
	return NULL;
}

new_node->next = current_node->next;
current_node->next = new_code;

return new_node;
}
