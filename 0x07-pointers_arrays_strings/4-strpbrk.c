#include "main.h"
/**
* _strpbrk - return pointer to byte in s that matches a byte in accept
* @s: string to search
* @accept: target matches
* Return: pointer to index of string at first occurence
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != accept)
	{
		i++;
	}
	if (s[i] == c)
		return (strpbrk(s, accept));
	else
		return (NULL);
}
