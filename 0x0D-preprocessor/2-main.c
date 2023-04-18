#include <stdio.h>

/**
 * main - prints the nae of the file it was compiled from
 *
 * @void: no parameters
 *
 * Return: 0 is success
 */
int main(void)
{
	/* Use the printf dunction to output the name of the source file */
	/* Using the __FILE__ preprocessot macro followed by a newline */
	printf("%s\n", __FILE__);

	/* Return 0 to indicate successful program exec */
	return (0);
}
