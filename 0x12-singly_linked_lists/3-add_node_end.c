#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A pointer to a pointer to the first node of the linked list
 * @str: The string to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int runner;
	list_t *new_end_node, *current_node;

	new_end_node = malloc(sizeof(list_t));
	runner = 0;

	if (new_end_node)
	{
		new_end_node->str = strdup(str);
		if (!new_end_node->str || !str)
		{
			free(new_end_node);
			return (NULL);
		}
		while (new_end_node->str[runner])
			runner++;

		new_end_node->len = runner;
		new_end_node->next = NULL;

		if (!*head)
		{
			*head = new_end_node;
			return (new_end_node);
		}

		current_node = *head;


		while (current_node->next)
			current_node = current_node->next;

		current_node->next = new_end_node;

		return (new_end_node);
	}

	return (NULL);
}
