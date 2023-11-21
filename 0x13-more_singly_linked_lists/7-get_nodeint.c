#include "lists.h"

/**
 * get_nodeint_at_index - Finds a given node in a linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to find (indices starting at 0)
 *
 * Return: Pointer to the desired node,
 *         or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t position;

	for (position = 0; (position < index) && (head != NULL); position++)
		head = head->next;

	if (position < index)
		return (NULL);

	return (head);
}

