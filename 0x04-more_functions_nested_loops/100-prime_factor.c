#include <stdio.h>
/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: (0) Success
 */
long long largest_prime_factor(long long n) {
    long long i = 2;
    while (i * i <= n) {
        if (n % i) {
            i++;
        } else {
            n /= i;
        }
    }
    if (n > 1) {
        return n;
    }
    return i;
}

int main() {
    long long number = 612852475143;
    long long largest_prime = largest_prime_factor(number);
    printf("%lld\n", largest_prime);
    return 0;
}

