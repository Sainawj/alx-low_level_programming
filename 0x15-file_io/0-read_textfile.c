#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_txtfile- Read text to STDOUT
 * @fname: text file to be read
 * @letters: no of letters to be read
 * Return: w- actual number of bytes
 * 0 when function fails or fname is NULL
 */

ssize_t read_textfile(const char *fname, size_t letters)
{
	ssize_t file, let, wrt;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (fname == NULL)
		return (0);

	file = open(fname, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	let = read(file, txt, letters);

	wrt = write(STDOUT_FILENO, txt, let);

	close(file);

	return (wrt);
}
