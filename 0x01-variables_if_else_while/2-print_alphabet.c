#include <stdio.h>
#include <ctype.h>
/**
 *  main - program that prints the alphabet followed by a new line
 *  only use the putchar
 *  Return: 0
 */

int main(void)
{
	int c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c += 1;
		}
	putchar('\n');
	return (0);
}
