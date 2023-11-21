#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted (indices starting at 0)
 *
 * Return: 1 if the function succeeds,
 *        -1 if the function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current_node = *head;
	unsigned int node;

	if (current_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (current_node->next == NULL)
		return (-1);

		current_node = current_node->next;
	}

	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);
	return (1);
}

