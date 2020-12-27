#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b)
{
    return b == 0 ? a : a > b ? gcd(a - b, b) : gcd(a, b - a);
}

int main()
{
    unsigned int a, b;

    printf("Enter two positive integers: ");
    scanf("%u%u", &a, &b);

    printf("Greatest common divisor: %u\n", gcd(a, b));

    return 0;
}
