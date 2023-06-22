#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
	_putchar('\');
}
}
_putchar('\n');
}
