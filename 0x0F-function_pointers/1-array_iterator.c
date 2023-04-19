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
	size_t i;

	/* loop through the array */
	for (i = 0; i < size; i++)
	{
		/* Check if  the function pointer is not NULL befor calling the function */
		if (action != NULL)
		{
			/* Call the function pointer to by action */
			action(array[i]);
		}
	}
}
