#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The data (n) of the head node, or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int n;

	current_node = *head;

	if (current_node == NULL)
		return (0);

	*head = current_node->next;
	n = current_node->n;
	free(current_node);
	return (n);
}

