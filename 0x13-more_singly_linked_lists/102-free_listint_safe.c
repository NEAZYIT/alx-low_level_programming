#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list and sets the head to NULL
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (count);
}
