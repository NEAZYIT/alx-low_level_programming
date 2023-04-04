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
/* loop through each byte to copy */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /* copy each byte from source to destination */
	}
	return (dest); /* return pointer to destination memory area */
}
