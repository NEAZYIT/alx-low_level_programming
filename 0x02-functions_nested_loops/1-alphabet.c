#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
char str[27] = "abcdefghijklmnopqrstuvwxyz";

int i = 0;

while ("abcdefghijklmnopqrstuvwxyz"[i] != '\0')
{
	putchar(str[i]);

        i++;
}
putchar('\n');
return 0;
}
