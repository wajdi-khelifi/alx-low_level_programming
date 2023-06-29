#include "main.h"
/**
* *_strncat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: An integer variable used to represent a numeric value
* Return: Pointer to the resulting string @dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
	dest[n] = '\0';
	return (dest);
}
