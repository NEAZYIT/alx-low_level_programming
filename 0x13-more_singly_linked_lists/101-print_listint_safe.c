#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the beginning of the list.
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *nodes[1024];
	size_t count = 0;

	while (temp != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (temp == nodes[i])
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
		}

		nodes[count++] = temp;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}

	return (count);
}
