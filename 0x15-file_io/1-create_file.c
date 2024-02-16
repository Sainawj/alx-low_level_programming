#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_fl - creates a file
 * @txt_content: content file
 * @fname: the variable pointer
 * Description: Creates function for making a file.
 * Return: -1 on failure, 1 on successful
 */

int create_fl(const char *fname, char *txt_content)
{
	int i = 0, fl;

	if (fname == NULL)
		return (-1);

	if (txt_content == NULL)
		txt_content = "";


	while (txt_content[i] != '\0')
	{
		i++;
	}

	fl = open(fname, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
		return (-1);

	write(fl, txt_content, i);

	return (1);
}
