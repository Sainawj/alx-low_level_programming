#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');

		for (j = i + 1; j < 10; j++)
		{
			putchar(j + '0');
			putchar(',');
			putchar(' ');

			for (k = j + 1; k < 10; k++)
			{
				putchar(k + '0');
				putchar(',');
				putchar(' ');

				for (l = k + 1; l < 10; l++)
				{
					putchar(l + '0');
					if (i < 6 || j < 7 || k < 8 || l < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
