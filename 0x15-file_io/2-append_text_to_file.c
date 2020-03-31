#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - function that append a file.
 * @filename: Name of the file to read
 * @text_content: string name to appdend
 * Return: 1 on succes or -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cr, wr, i;

	if (filename == NULL)
		return (-1);
	cr = open(filename, O_RDWR | O_APPEND);
	if (cr == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(cr);
		return (1);
	}
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
