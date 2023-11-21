#include "lists.h"

/**
 * free_listp2 - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Frees a linked list with cycle detection.
 * @h: Pointer to the head of the list.
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listp_t *visited_nodes = NULL;
	listp_t *new_node, *current_node;
	listint_t *current;

	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = visited_nodes;
		visited_nodes = new_node;

		current_node = visited_nodes;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
			if (*h == current_node->p)
			{
				*h = NULL;
				free_listp2(&visited_nodes);
				return (node_count);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		node_count++;
	}

	*h = NULL;
	free_listp2(&visited_nodes);
	return (node_count);
}

