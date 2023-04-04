#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print the sum of the two diagonals of a squeare matrix
*
* @a: pointer to an integer
* @size: int type
*
* Description: this print the chessboard
* Return: void
*/
void print_diagsums(int *a, int size)
{
int s;
int diagonal1 = 0;
int diagonal2 = 0;

for (s = 0; s < size; s++)
{
	diagonal1 += a[(size + 1) * s];
    diagonal2 += a[(size - 1) * (s + 1)];
}
printf("%d, %d\n", diagonal1, diagonal2);
}
