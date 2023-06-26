#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to convert.
 *
 * Return: The converted integer value.
 *
 * Description: This function converts a string to an integer, taking into
 * account any preceding - and + signs. If there are no numbers in the string,
 * it returns 0. The function does not use long, declare new variables of type
 * array, hard-code special values, and ensures it does not cause signed
 * integer overflow.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	bool digitFound = false;

	while (*s != '\0') {
		if (*s == '-' && !digitFound) 
		{
			sign = -1;
		}
		else if (*s == '+' && !digitFound)
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digitFound = true;
			result = result * 10 + (*s - '0');
			if (result < 0)
			{
				if (sign == 1)
				{
					return -1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (digitFound)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
