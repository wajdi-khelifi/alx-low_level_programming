#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %zu bytes(s)\n", sizeof(char));
printf("size of an int: %zu bytes(s)\n", sizeof(int));
printf("size of a long int: %zu bytes(s)\n", sizeof(long));
printf("size of long long int : %zu bytes(s)\n", sizeof(long long));
printf("size of float: %zu bytes(s)\n", sizeof(float));
return (0);
}
