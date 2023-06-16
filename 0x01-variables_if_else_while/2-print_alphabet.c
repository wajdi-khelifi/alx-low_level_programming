#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[26];
int i;
for (i = 0; i < 26 ; i++)
{
alphabet[i] = 'a' + i;
}
for (i = 0; i < 26 ; i++)
{
printf("%c\n", alphabet[i]);
}
return (0);
}
