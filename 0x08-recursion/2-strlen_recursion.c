#include "main.h"
/**
* _strlen_recursion - Return the length of a string
* @s: String
* Return: void
*/
int _strlen_recursion(char *s)
{
	return (_strlen_recursion(strlen(*s)));
}
