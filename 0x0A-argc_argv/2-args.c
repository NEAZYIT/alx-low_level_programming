#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: number of arguments
 * @argv: the vector that hold the arguments
 *
 * Description: using argc and argv to  achieve the indended function
 * Return: returns 0 if it works or something else if error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
