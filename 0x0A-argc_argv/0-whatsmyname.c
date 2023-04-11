#include "main.h"
#include <stdio.h>

/**
 * main - prints its name fallowed by a newline
 * @argc: number of arguments
 * @argv: the vector that hold the arguments
 *
 * Description: prints the current directory and the name like ./myname
 * Return: returns the name.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	return (0);
	}
	return (0);
}
