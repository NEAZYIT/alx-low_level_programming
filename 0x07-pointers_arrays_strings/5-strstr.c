#include "main.h"
/**
 * _strstr - ffind the first occurrence
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to needle or NULL if no byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *start = haystack;
        char *pattern = needle;

		while (*haystack == *pattern && *pattern != 0 && *haystack != 0)
		{
			haystack++,
			pattern++;
		}
		if (!*pattern)
			return (start);

		haystack = start + 1;
	}
	return (0);
}
