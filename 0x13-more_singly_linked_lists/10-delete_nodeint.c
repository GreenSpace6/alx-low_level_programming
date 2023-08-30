#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the note at index of the linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{ if (head == NULL || *head == NULL || index >= listint_size(*head)) {
        return -1;
                                                                     }
if (index == 0) {
        *head = (*head)->next;
        free(*head);
        return 1;
}

listint_t *current_node = *head;
for (unsiged int i = 0; i < index - 1; i++) {
        current_node = current_node->next;
}

listint_t *next_node = current_node->next->next;
free(current_node->next);
current_node->next = next_node;

return 1;
}
