#include "lists.h"

/**
 * list_length - finds the number of elements in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t list_length(const list_t *head)
{
	size_t element_count = 0;

	while (head != NULL)
	{
		element_count++;
		head = head->next;
	}

	return (element_count);
}

