#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: the size of the square
 */
void print_square(int size)
{
int i;
if (size > 0)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
}
_putchar('\n');
}
