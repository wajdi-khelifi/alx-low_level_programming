#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int max = va_arg(args, int);

	for (int i = 0; i < n - 1; i++)
	{
		int temp = va_arg(args, int);

		max = temp > max ? temp : max;
	}
	va_end(args);
	printf("\n %d ", print_numbers);
}
