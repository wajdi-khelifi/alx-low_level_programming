#include "main.h"
/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@str: pointer to string.
 *
 *Return: pointer to str.
 */
char *cap_string(char *str)
{
	int cap = 1;

	while
	{
	if (strchr(" \t\n,;.!?\"(){}", *str) != NULL)
	{
		cap = 1;
	}
	else if (cap && isalpha(*str))
	{
		*str = toupper(*str);
		cap = 0;
	}
	str++;
	}
	return (str);
}
