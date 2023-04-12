#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -a function that concatenates two strings
 * @s1: the first string main gives us
 * @s2: the second string main gives us
 *
 * Description: the returned memory allocation has
 * a copy of added strings and can be freed
 * Return: the pointer or null if string is null
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
