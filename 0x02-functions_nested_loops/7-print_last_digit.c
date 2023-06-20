#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer to be computed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int n = abs(n);
int last_digit = n % 10;
return (last_digit);
}
