#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    printf("Enter First number\n");
    scanf("%d", &a);
    printf("Enter Second number\n");
    scanf("%d", &b);
    printf("Numbers before Swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Numbers after Swapping: a = %d, b = %d\n", a, b);
    return 0;

}
