#include <stdio.h>
/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: (0) Success
 */
int main(void) {
long long number = 612852475143;
long long prime = 2;

while (number > prime)
{
if (number % prime == 0)
{
number = number /prime;
}
else
{
prime++;
}
}
printf("%lld\n", prime);
return (0);
}

