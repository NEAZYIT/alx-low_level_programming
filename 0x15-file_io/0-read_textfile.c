#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nread;
	ssize_t nwritten;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buf, (ssize_t)nread);
	if (nwritten == -1 || (size_t)nwritten != (size_t)nread)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (nwritten);
}
