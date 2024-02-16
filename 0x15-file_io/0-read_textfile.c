#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text to STDOUT
 * @filename: text file to be read
 * @letters: no of letters to be read
 * Return: w- actual number of bytes
 * 0 when function fails or fname is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filename, read, write;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (filename == -1)
	{
		free(text);
		return (0);
	}

	read = read(filename, text, letters);

	write = write(STDOUT_FILENO, text, read);

	close(filename);

	return (write);
}
