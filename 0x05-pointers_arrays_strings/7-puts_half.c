#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line.
* @str: that's the string
*
* Return: void
*/
void puts_half(char *str)
{
	int i = 0;
	int length_of_the_string = strlen(str);
	int n = 0;

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
		for (i = n; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = length_of_the_string / 2;
		for (i = n; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
