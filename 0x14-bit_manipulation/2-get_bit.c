#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, final;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	i = 1 << index;
	final = n & i;
	if (final == i)
	{
		return (1);
	}
	return (0);
}
