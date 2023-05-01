#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of  linked list
 * @head: pointer to head node of list
 *
 * Return: sum of all the data (n) of list, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
