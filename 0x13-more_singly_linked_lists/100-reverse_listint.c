#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the first node after reversal.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;
	return (*head);
}

