#include <stdio.h>

/**
 * main - prints numbers 0-10 without using char or printf/puts,
 * and putchar 2x max
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
