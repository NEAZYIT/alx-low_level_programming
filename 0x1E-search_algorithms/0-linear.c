#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an integer array using linear search.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @value: Value to locate within the array.
 *
 * Return: Index of the value; -1 if the value is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, value, 0));
}

/**
 * recurse_helper - Recursive implementation of linear search.
 * @arr: Pointer to the array of integers.
 * @size: Size of the array.
 * @val: Value to locate.
 * @idx: Current index being checked.
 *
 * Return: Index of the value; -1 if the value is not found.
 */
int recurse_helper(int *arr, size_t size, int val, size_t idx)
{
	if (idx == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, arr[idx]);

	if (arr[idx] == val)
		return (idx);

	return (recurse_helper(arr, size, val, idx + 1));
}
