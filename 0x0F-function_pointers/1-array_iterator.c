#include "function_pointers.h"

/**
 * array_iterator - executes a function on each elemnt of an array
 *
 * @array: a pointer to an integer array
 * @size: the number ofelements in the array
 * @action: a pointer to a function that takes an integer as an argument
 * and returns void
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elements;
	/* run through the array to kow which are the elements */
	/* elements runs while it is less than the size */
	if (action && array)
	{
		for (elements = 0; elements < size; elements++)
			action(array[elements]);
	}
	/* so  dereference the pointer to the function */
}
