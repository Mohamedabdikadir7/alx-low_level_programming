#include "main.h"

/**
 * read_textfile - reads and prints the contents of a text file
 * @filename: the name of the file to read
 * @letters: the number of characters to read and print
 *
 * Return: the number of characters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buf, letters);

	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[nread] = '\0';
	if (write(STDOUT_FILENO, buf, nread) != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (nread);
}
