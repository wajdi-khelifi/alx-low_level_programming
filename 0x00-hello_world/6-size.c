#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long));
printf("size of long long int : %zu byte(s)\n", sizeof(long long));
printf("size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
