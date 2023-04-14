#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: is a pointer to the first string
 * @s2: is a pointer to the second string
 * @n: an integer (6) with the limit of what we are going to add to s1
 *
 * Return: pointer to a newlly allocated memory with s1 & s2, NULL if it fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *result = NULL;

if (s1 != NULL)
	len1 = strlen(s1);
if (s2 != NULL)
	len2 = strlen(s2);
else
	len2 = 0;

if (n > len2)
	n = len2;

len1 += len2;
len1++;

result = (char *)malloc(len1 *sizeof(char));
if (result != NULL)
{
	if (s1 != NULL)
		strcpy(result, s1);
	strncpy(result + strlen(result), s2, n);
	result[len1 - 1] = '\0';
}

return (result);
}
