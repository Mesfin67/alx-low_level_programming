#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t node_count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		node_count += 1;
		cursor = cursor->next;
	}

	return (node_count);
}

