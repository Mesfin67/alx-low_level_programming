#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: Head of the list
 *
 * Return: The number of elements (nodes) in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t node_count = 0;

	while (cursor != NULL)
	{
		node_count += 1;
		cursor = cursor->next;
	}

	return (node_count);
}

