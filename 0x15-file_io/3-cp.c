#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - main function.
 * @argc: Number of elements
 * @argv: Argv string
 * Return: 0 on succes or -1 on fail
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_fromread, file_w;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (file_fromread)
	{
		file_fromread = read(file_from, buf, 1024);
		if (file_fromread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (file_fromread > 0)
		{
			file_w = write(file_to, buf, file_fromread);
			if (file_w == -1 || file_w != file_fromread)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
