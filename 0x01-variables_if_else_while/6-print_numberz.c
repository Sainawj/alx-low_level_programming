#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 
 * only use the putchar function
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	printf("\n");
	return (0);
}
