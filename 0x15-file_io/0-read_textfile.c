#include <stdio.h>
#include <stdlib.h>
#include "main.h"

 /**
 * read_textfile - Reads a text file and prints its contents to stdout.
 * @filename: Pointer to the name of the file to read.
 * @letters: The number of bytes to read and print from the file.
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: The number of bytes actually read and printed, or 0 if an error occurs.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
