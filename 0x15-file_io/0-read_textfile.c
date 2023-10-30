#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * 0 - If the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rf, wf, cf;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rf = read(fd, buffer, letters);
	if (rf == -1)
		return (0);

	wf = write(STDOUT_FILENO, buffer, rf);
	if (wf == -1 || wf != rf)
		return (0);

	cf = close(fd);
	if (cf == -1)
		return (0);

	free(buffer);

	return (wf);
}
