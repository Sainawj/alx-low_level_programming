#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @w: The input number to check
 * Return: int.
 */

int _abs(int w)
{
	if (w < 0)
	{
	w = w * (-1);
	return (w);
	}
	else
	return (w);
}
