#include "main.h"

/**
 * create_file - Create a file
 * @filename: Name of the file
 * @text_content: Content to write to the file
 * Return: 1 is successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t s;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			;
	}
	else
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		s = write(fd, text_content, i);
	if (s == -1)
		return (-1);
	close(fd);

	return (1);
}
