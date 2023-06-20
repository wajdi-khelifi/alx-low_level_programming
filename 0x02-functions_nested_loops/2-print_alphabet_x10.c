#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet_x10(void)
{
int i;
while (i++ < 10)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
_putchar(alp);
_putchar('\n');
}
}
