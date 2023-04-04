#include "main.h"

/**
* _strchr - finds the first occurrence of a character in a string
* @s: the string to search
* @c: the character to find
*
* Description: This function searches for the first occurrence of the
* character 'c' in the string 's'. If the character is found, it returns
* a pointer to the first occurrence of the character in the string. If the
* character is not found, it returns NULL.
*
* Return: returns a pointer to the first occurrence of the character in
* the string, or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != 0)
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	if (c == 0)
		return (s + a);
	return (0);
}
