#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @s: The input number to check
 * Return: int.
 */

int print_last_digit(int s)
{

	s %= 10;

	if (s < 0)
	s *= -1;
	_putchar(s + '0');
	return (s);
}
