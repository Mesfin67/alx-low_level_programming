#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements
 * in a linked list_t list
 * @h: Pointer to the list_t list
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
	element_count++;
	h = h->next;
	}

	return (element_count);
}

