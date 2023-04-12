#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to nowly allocated memory
 * @str: a string given by main
 *
 * Description: the retuned memory allocation has a copy of the string and
 * can be freed
 * Return: the pointer or null uf string us null
 */

char *_strdup(char *str)
{
	size_t len;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}
