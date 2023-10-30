#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 or -1 if the function fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wf = write(fd, text_content, len);
	if (wf == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
