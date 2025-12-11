#include <stdio.h>
#include <conio.h>
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n, F;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    F = fact(n);
    printf("The factorial of %d is: %d\n", n, F);
    return 0;
}