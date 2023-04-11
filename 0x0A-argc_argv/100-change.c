#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the minumin number of coins for perfect change
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the intended function
* Return: returns 0 if it works or something else if error
* A: if argc does not have only 2 arguments or if the
*	second argument is not a digit
* B: turn the whole number into an int, then subtract
*	25, 10, 5, 2, and 1. till no more. increase counter and return it
* C: checks if any non digits in the string.
*/

int main(int argc, char *argv[])
{
	int cents = 0;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	change += cents / 25;
	cents %= 25;
	change += cents / 10;
	cents %= 10;
	change += cents / 5;
	cents %= 5;
	change += cents / 2;
	cents %= 2;
	change += cents;

	printf("%d\n", change);
	return (0);
}
