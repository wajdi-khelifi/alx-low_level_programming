#include "main.h"
/**
 * *string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *conv = str;

	while (*conv != '\0')
	{
		*conv = toupper(*conv);
		conv++;
	}
	return (str);
}
