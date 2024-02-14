#include "main.h"
#include <stdlib.h>

/**
 * read_txtfile- Read text to STDOUT
 * @fname: text file to be read
 * @letters: no of letters to be read
 * Return: w- actual number of bytes 
 * 0 when function fails or fname is NULL.
 */
ssize_t read_txtfile(const char *fname, size_t letters)
{
        char *chr;
        ssize_t rf;
        ssize_t wrt;
        ssize_t rd;

        rf = open(fname, O_RDONLY);
        if (rf == -1)
                return (0);
        chr = malloc(sizeof(char) * letters);
        rd = read(rf, buf, letters);
        wrt = write(STDOUT_FILENO, chr, rd);

        free(chr);
        close(rf);
        return (wrt);
}
