#include <stdio.h>
#include "search_algos.h"

int recurse_helper(int *array, size_t left, size_t right, int value);

/**
 * binary_search - Searches for value in a sorted array of integers
 * using recursive binary search
 * @array: Pointer to the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, 0, size - 1, value));
}

/**
 * recurse_helper - Recursive implementation of binary search
 * @array: Pointer to the array to search
 * @left: Leftmost index
 * @right: Rightmost index
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int recurse_helper(int *array, size_t left, size_t right, int value)
{
	size_t i = left, mid;

	if (left > right)
		return (-1);

	/* Print search progress */
	printf("Searching in array: %d", array[i++]);
	while (i <= right)
		printf(", %d", array[i++]);
	printf("\n");

	/* Calculate mid */
	mid = left + ((right - left) / 2);

	/* Check if mid is the value */
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		if (mid != 0)
			return (recurse_helper(array, left, mid - 1, value));
		else
			return (-1);
	}
	else
		return (recurse_helper(array, mid + 1, right, value));
}
