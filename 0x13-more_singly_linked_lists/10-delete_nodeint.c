#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index if a listint_t
 * linked list.
 * @head: A pointer to the head of the listint_t list
 * @index: The index of the node that should be deleted. index strats at 0.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev = NULL;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	for (ptr = *head; index && ptr->next; index--, ptr = ptr->next)
		prev = ptr;

	if (index)
		return (-1);

	if (prev)
		prev->next = ptr->next;
	free(ptr);

	return (1);
}
