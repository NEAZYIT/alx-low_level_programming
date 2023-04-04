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
	while (*haystack != 0)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack == *n && *n != 0 && *haystack != 0)
			haystack++, n++;
		if (*n == 0)
			return (h);
		haystack = ++h;
	}
	return (0);
}
