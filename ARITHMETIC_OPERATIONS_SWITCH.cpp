#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, sum, diff, product, division, remainder, ch;
    printf("Algebra of Numbers\n");
    printf("Enter the First Number\n");
    scanf("%d", &a);
    printf("Enter the Second Number\n");
    scanf("%d", &b);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Remainder\n");
    printf("Enter Choice Number\n");
    scanf("%d", &ch);
    switch (ch) {
        case 1:
            sum = a + b;
            printf("Sum of the numbers is %d\n", sum);
            break;
        case 2:
            diff = a - b;
            printf("Difference of the numbers is %d\n", diff);
            break;
        case 3:
            product = a * b;
            printf("Product of the numbers is %d\n", product);
            break;
        case 4:
            division = a / b;
            printf("Division of the numbers is %d\n", division);
            break;
        case 5:
            remainder = a % b;
            printf("Remainder of the numbers is %d\n", remainder);
            break;
        default:
            printf("You have entered a wrong choice\n");
    }
    return 0;
}