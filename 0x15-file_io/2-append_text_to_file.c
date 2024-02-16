#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_txt2fl - appends text to the end of  file
 * @fname: variable pointer
 * @txt_content: content file
 * Description: function that appends text to the end of  file
 * Return: 1 on success, -1 on failure
 */

int append_txt2fl(const char *fname, char *txt_content)
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

	fl = open(fname, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	write(fl, txt_content, i);

	return (1);
}
