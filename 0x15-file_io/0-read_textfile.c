#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * rd_txtfl- Read text to STDOUT
 * @fname: text file to be read
 * @letas: no of letters to be read
 * Return: w- actual number of bytes
 * 0 when function fails or fname is NULL
 */

ssize_t rd_txtfl(const char *fname, size_t letas)
{
	ssize_t fl, rd, wr;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (fname == NULL)
		return (0);

	fl = open(fname, O_RDONLY);

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
