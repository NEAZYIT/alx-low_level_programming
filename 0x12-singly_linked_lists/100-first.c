#include <stdio.h>
#include "lists.h"

/**
 * befor_main - prints a string befor the main function is executed
 *
 * Return: void
 */

void __attribute__ ((constructor)) befor_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
