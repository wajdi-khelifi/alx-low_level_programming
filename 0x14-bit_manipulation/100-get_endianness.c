#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int count;
	char *c;

	count = 1;
	c = (char *) & count;

	return (*c);
}
