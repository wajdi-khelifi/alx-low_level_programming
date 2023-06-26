#include "main.h"
/**
* rev_string - Write a function that reverses a string
*
* @s: string var pointer
*/
void rev_string(char *s)
{
	int i, j;
	int len = strlen(s);
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return (s);
}
