#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: nothing.
 */

void jack_bauer(void)
{
	int s = 0;
	int j = 0;

	while (s <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j += 1;
		}
		s += 1;
	}
}
