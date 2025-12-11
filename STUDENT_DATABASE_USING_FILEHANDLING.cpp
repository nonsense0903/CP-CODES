#include <stdio.h>
#include <stdlib.h>

struct Student {
    char id[15];
    char name[25];
    int marks;
};

int main() {
    struct Student s;
    FILE *fptr;
        fptr = fopen("student_records.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    printf("Enter Student ID: ");
    scanf("%s", s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%d", &s.marks);
    fprintf(fptr, "ID: %s, Name: %s, Marks: %d\n", s.id, s.name, s.marks);
    fclose(fptr);
    printf("Student record saved successfully\n");
    return 0;
}