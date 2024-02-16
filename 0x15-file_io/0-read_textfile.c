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
	ssize_t fl, rd, wr;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
	{
		free(txt);
		return (0);
	}

	rd = read(fl, txt, letters);

	wr = write(STDOUT_FILENO, txt, rd);

	close(fl);

	return (wr);
}
