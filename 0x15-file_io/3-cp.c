#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file
* @arg: argument of a num
* @args: argument of a string
* Return: 0
*/

int main(int arg, char *args[])
{
int file_org, file_des;
int num1 = 1024, num2 = 0;
char buf[1024];

if (arg != 3)
	dprintf(STDERR_FILENO, "Usage: copy  file_org to file_des\n"), exit(97);
file_org = open(args[1], O_RDONLY);
if (file_org == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
	exit(98);
}
file_des = open(args[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file_des == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
	close(file_org), exit(99);
}
while (num1 == 1024)
{
	num1 = read(file_org, buf, 1024);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	num2 = write(file_des, buf, num1);
	if (num2 < num1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]), exit(99);
}

if (close(file_org) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_org), exit(100);

if (close(file_des) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des), exit(100);

return (0);
}
