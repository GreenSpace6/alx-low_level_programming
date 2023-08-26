PROJECT 0x12. C - Singly linked lists

TEST FILES
Test: first for test purposes

HEADER FILE
lists.h - The prototypes of all your functions and the prototype of the function _putchar 
File type:
* struct list_s
* char *str
* unsigned int len
* struct list_s *next
typedef list_t	struct list_s
0-print_list.c	size_t print_list(const list_t *h);
1-list_len.c	size_t list_len(const list_t *h);
2-add_node.c	list_t *add_node(list_t **head, const char *str);
3-add_node_end.c	list_t *add_node_end(list_t **head, const char *str);
4-free_list.c	void free_list(list_t *head)

TASKS#
0. Print list
Write a function that prints all the elements of a list_t list.
1. List length
Write a function that returns the number of elements in a linked list_t list.
2. Add node
Write a function that adds a new node at the beginning of a list_t list.
3. Add node at the end
Write a function that adds a new node at the end of a list_t list.
4. Free list
Write a function that frees a list_t list.
5. The Hare and the Tortoise
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
6. Real programmers can write assembly code in any language
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

Author: Thandazani
