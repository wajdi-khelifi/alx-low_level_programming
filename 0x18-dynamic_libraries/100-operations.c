#include "main.h"
/**
 * add - Adds two integers.
 * @a: The first integer to be added.
 * @b: The second integer to be added.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The integer from which b is subtracted.
 * @b: The integer to be subtracted from a.
 *
 * Return: The result of subtracting b from a.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer to be multiplied.
 * @b: The second integer to be multiplied.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing a by b. If b is zero, returns 0.
 */
int my_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - Calculates the modulo of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder when a is divided by b. If b is zero, returns 0.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}

