#include <ctype.h>
#include "main.h"
/**
* _islower - Checks if a character is lowercase.
* @c: The character to be checked.
*
* Return: 1 if character is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (islower(c))
{
return (0);
}
else
return (1);
}
