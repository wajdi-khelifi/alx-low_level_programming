#include "main.h"
/**
*  _strcpy -  copies a string into a deztinated variable
* @dest: destination char argument of characters
* @src: source char argument of characters
* Return: a string of character upon success
*/
char *_strcpy(char *dest, char *src)
{
	int j, i;

	while (scr[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
