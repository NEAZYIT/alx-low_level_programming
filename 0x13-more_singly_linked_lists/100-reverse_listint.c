#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: A pointer to a pointer to the first node in the listint_t list
 *
 * Return: A pointer to the first node in the reversed listint_t list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
