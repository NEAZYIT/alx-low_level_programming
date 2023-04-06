#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: Pointer to the string to be measured
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	/* Base case: if we've reached the end of the string, return 0 */
	if (*s == '\0')
     	{
		return 0;
	}
	/* Recursive case: add 1 to the length of the rest of the string */
	return 1 + _strlen_recursion(s + 1);
}
