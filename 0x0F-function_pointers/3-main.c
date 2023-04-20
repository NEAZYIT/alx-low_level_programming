#include "3-calc.h"
/**
 * main - performs simple operations
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, otherwise an error code
 */
int main(int argc, chat *argv[])
{
	int (*funoperator)(int a, int b);

	/* Check if the nulber of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Get the function pointer for the operator passed as argument */
	funoperator = gte_op_func(argc[2]);

	/* Check if the operator is valid */
	if (!funoperator || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	/* Check for division by zero */
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	/* print the result of the operation */
	printf("%d\n", funoperator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
