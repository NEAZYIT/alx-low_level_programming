#include "main.h"
#include <stdio.h>

/**
* main - prints its name followed by a newline
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: prints the number of arguments passed into the function
* Return: returns 0 if it works
*/

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);

}
