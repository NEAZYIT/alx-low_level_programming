#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * prints an error message to standard error and exits the program with the
 * specified exit code.
 *
 * @param msg: The error message to print.
 * @param code: The exit code to use when exiting the program.
 */


void error_exit(char *msg, int code)
{
	dprintf(STDERR_FILENO, "s\n", msg);
	exit(code);
}

/**
 * Opens the specified file with the given flags and more and returns the
 * file descriptor. Exits the program with an error message if the file cannot
 * be opened.
 *
 * @param filename: The name of the file to open.
 * @param flags: The flags to use when opening the file.
 * @param mode: The mode to use  when creating the file.
 * 
 * @Return: The file descriptor of the opened file.
 */

int open_file(char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * copies the contents of the file with the specified file descriptor to the
 * file with the specified file descriptor. Exits the program with an error
 * message if there is an error reading from or writing to the files.
 *
 * @param fd_from: The file descriptor of the file to copy from.
 * @param fd_to: The file descriptor of the file to copy to
 */

void copy_file(int fd_from, int fd_to)
{

	char buf[BUF_SIZE];
	ssize_t nread;

	while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to output file\n");
			exit(99);
		}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from input file\n");
		exit(98);
	}
}

/**
 * The main function of the program. Takes two  command_line arguments: the name
 * of the file to copy from and the name of the file to copy to. copies the
 * contents of the first file to the second file. Exits the program with an
 * error message if there are any errors
 *
 * @param argc: The number of command_line arguments.
 * @param argv: The array of command_line arguments.
 *
 * @Return: The exit code of the program.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}

	int fd_from = open_file(argv[1], O_RDONLY, 0);
	int fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dpritnf(STDERR_FILENO, "Error: Can't close input file\n");
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close output file\n");
		exit(100);
	}

	return (0);
}
