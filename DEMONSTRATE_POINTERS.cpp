#include <stdio.h>
#include <conio.h>
int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    int *p;
    p = &x;
    printf("Value of x: %d\n", x);
    printf("Value of x using pointer: %d\n", *p);
    printf("Address of x using pointer: %p\n", p);
    printf("Address of x using &x: %p\n", &x);
    return 0;
}