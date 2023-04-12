#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars and initializes it
 * @size: the size that main function sends us
 * @c: the character we are sent.
 *
 * Description: use malloc and argc argv to  achieve goal
 * returns null if size is zero. Returns a
 * pointer to the array or NULL if it fails.
 * Return: the pointer if successful, NULL if not
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
