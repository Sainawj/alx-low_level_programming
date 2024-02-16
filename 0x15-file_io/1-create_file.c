#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_fl - creates a file
 * @text_content: content file
 * @fname: the variable pointer
 * Description: Creates function for making a file.
 * Return: -1 on failure, 1 on successful
 */

int create_fl(const char *fname, char *text_content)
{
	int i = 0, fl;

	if (fname == NULL)
		return (-1);

	if (txt_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	fl = open(fname, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	write(fl, text_content, i);

	return (1);
}
