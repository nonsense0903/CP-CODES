#include <stdio.h>

int gcd(int p, int q) {
    int remainder = p - (p / q * q);
    if (remainder == 0)
        return q;
    else
        return gcd(q, remainder);
}

int main() {
    int a, b, g;

    printf("Enter the First Number whose GCD is to be found\n");
    scanf("%d", &a);

    printf("Enter the Second Number whose GCD is to be found\n");
    scanf("%d", &b);

    g = gcd(a, b);
    printf("GCD of %d and %d is %d\n", a, b, g);

    return 0;
}