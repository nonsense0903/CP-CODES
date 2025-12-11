#include <stdio.h>
#include <conio.h>
int main() {
    int a[5][5], b[5][5], c[5][5];
    int i, j, r, col;
    printf("Enter the number of rows in Matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    printf("\nEnter the elements of Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the elements of Matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nAddition of matrices is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}