#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 *
 * @accept: pointer to get the bytes
 * @s: pointer to string char type
 *
 * Return: number of bytes in s which are from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			return (count);
			
	}

	return (count);
}
