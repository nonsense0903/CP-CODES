#include <stdio.h>
#include <conio.h>
int main() {
    int a[100], small;
    int i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < small) {
            small = a[i];
        }
    }
    printf("\n%d is the smallest number\n", small);
    return 0;
}