#include <stdio.h>

/**
 * main program that prints all single digit numbers of base 10
 * only use the putchar function
 * Return: 0
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
