#include <stdio.h>
#include <conio.h>
int fibonacci(int x) {
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}
int main() {
    int n, i;
    printf("Enter the number of terms required in Fibonacci Series\n");
    scanf("%d", &n);
    printf("The Fibonacci Series is:\n");
    for (i = 1; i <= n; i++) {
        printf("%5d", fibonacci(i));
    }
    return 0;
}