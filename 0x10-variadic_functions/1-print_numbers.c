#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers, seperated by a string,
 * fallowed by a new line.
 *
 * @seperator: a pointer to a string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of arguments (integers)
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(args);
}
