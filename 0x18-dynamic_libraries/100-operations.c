/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the subtraction (a - b)
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: The dividend
 * @b: The divisor
 * Return: The quotient of the division (a / b)
 *         If division by zero, returns -1
 */
int div(int a, int b)
{
	if (b == 0)
	{
	return (-1);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: The dividend
 * @b: The divisor
 * Return: The remainder of the division (a % b)
 *         If division by zero, returns -1
 */
int mod(int a, int b)
{
	if (b == 0)
	{
	return (-1);
	}
	return (a % b);
}
