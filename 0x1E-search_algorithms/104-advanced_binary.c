#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t left, size_t right,
		int value);

/**
 * advanced_binary - search for value in array of sorted ints
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - recursive implement of binary search
 * @array: array to search
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;
	size_t mid;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = left + ((right - left) / 2);

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (advanced_binary_recursive(array, left, mid, value));
	else
		return (advanced_binary_recursive(array, mid + 1, right, value));
}
