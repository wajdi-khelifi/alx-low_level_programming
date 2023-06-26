#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function
 */
void print_rev(const char *s)
{
	if (s == NULL)
		return;

	int len = 0;

	while (s[len] != '\0')
		len++;

	for (int i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
