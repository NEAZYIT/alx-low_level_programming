#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 *
 * @name: a pointer to a char array
 * @f: a function pointer that takes a char pointer as an argument
 * and returns void
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	/* chec if both pointers exist */
	if (name != NULL && f != NULL)
	{
		/* call the function pointed to  by f with name as the argument */
		f(name);
	}
}
