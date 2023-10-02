#include "main.h"

/**
 * read_textfile - function that reads a txt file and prints it to,
 * POSIX standard out.
 * @filename: pointer to the file.
 * @letters: number of letters to read and print.
 *
 * Return: actual number of letters it could read and print.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t wwrite, sz;
	char *buf; 

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	sz = read(file_descriptor, buf, letters);
	buf[sz] = '\0';
	
	wwrite = write(STDOUT_FILENO, buf, sz);
	
	close(file_descriptor);
	
	free(buf);

	return (wwrite);
}
