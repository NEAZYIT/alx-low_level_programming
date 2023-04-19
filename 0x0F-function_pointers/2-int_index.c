#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to an int array
 * @size: number: number of elements in the array 'array'
 * @cmp: pointer to a function that  receives an int
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	}

	return (-1);
}
