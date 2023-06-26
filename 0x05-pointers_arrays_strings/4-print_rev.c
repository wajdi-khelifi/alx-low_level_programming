#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	if (s == NULL)
		return;

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
}
