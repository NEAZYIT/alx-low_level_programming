#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b : The nulber of bytes to allocate.
 *
 * Description: exit with a status of 98 if failed
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
