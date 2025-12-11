#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter First Number\n");
    scanf("%d", &a);
    printf("Enter Second Number\n");
    scanf("%d", &b);
    printf("Enter Third Number\n");
    scanf("%d", &c);
    if (a >= b && a >= c) {
        printf("%d is the Greatest Number\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the Greatest Number\n", b);
    }
    else {
        printf("%d is the Greatest Number\n", c);
    }
    return 0;
}