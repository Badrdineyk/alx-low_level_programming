#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 or -1 if the function fails or filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	wf = write(fd, text_content, len);
	if (wf == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
