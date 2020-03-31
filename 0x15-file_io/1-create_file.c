#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: Name of the file to read
 * @text_content: File name
 * Return: 1 on succes or -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int cr, wr, i;

	if (filename == NULL)
		return (-1);
	cr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (cr == -1)
		return (-1);
	if (text_content == NULL)
		text_content = " ";
	else
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		wr = write(cr, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(cr);
	return (1);
}
