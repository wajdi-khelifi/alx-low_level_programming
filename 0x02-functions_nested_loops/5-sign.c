#include "main"
/**
 * print_sign - Checks the sign of number.
 * @n: The character to be checked.
 *
 * Return: 1 if number grater than zero, Return -1 if number less than zero, 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
_putchar('0');
return (0);
}
