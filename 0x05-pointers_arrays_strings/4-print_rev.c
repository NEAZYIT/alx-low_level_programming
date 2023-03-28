#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: int to check
 *
 * Description: this will print a strin in reverse
 * Return: 0 is success
 */
void print_rev(char *s)
{
int len = strlen(s);
for (int i = len - 1; i >= 0; i--)
{
      _putchar("%c", s[i]);
      _putchar('\n');
}
}
