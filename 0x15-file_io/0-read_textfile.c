#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: Name of the file to read
 * @letters: number of letters to print
 * Return: The number of nodes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, fd, wr, j;
	char *buf;

	if (filename == NULL)
		return (0);
	rd = open(filename, O_RDONLY);
	if (rd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = read(rd, buf, letters);
	if (fd == -1)
		return (0);
	buf[letters] = '\0';
	wr = write(STDOUT_FILENO, buf, fd);
	if (wr == -1)
		return (0);
	j = close(rd);
	if (j == -1)
		return (0);
	free(buf);
	return (wr);
}
