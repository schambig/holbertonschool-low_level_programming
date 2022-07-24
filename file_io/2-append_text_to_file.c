#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: Name of the file
 * @text_content: Content to append the file
 * Return: 1 if successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			;
	}
	else
		text_content = "";
	write(fd, text_content, i);
	return (1);
}
