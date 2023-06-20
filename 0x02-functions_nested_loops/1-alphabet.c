#include "main.h"
/**
* main - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
}
int main (void)
{
	print_alphabet();
	return (0);
}

