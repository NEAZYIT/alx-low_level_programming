#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: char to check
 * @src: char to check
 * @n: unsigned int to check
 *
 * Return: 0 is success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
