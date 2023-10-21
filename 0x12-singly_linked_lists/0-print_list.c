#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @head: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *head)
{
	const list_t *current_node = head;

	size_t node_count = 0;

	while (current_node != NULL)
	{
		if (current_node->str != NULL)
		{
			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		node_count++;

		current_node = current_node->next;
	}

	return (node_count);
}

