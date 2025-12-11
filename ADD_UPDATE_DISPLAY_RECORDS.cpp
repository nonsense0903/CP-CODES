#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float percentage;
};

void addStudent(FILE *file);
void displayStudents(FILE *file);
void updateStudent(FILE *file);

int main() {
    FILE *file;
    int choice;

    file = fopen("student_records.dat", "rb+");
    if (file == NULL) {
        file = fopen("student_records.dat", "wb+");
        if (file == NULL) {
            printf("Error opening file.\n");
            return 1;
        }
    }

    do {
        printf("\n--- Student Database Menu ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Update a Student Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addStudent(file); break;
            case 2: displayStudents(file); break;
            case 3: updateStudent(file); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please choose again.\n");
        }
    } while (choice != 4);

    fclose(file);
    return 0;
}

void addStudent(FILE *file) {
    struct Student student;

    printf("\nEnter Roll Number: ");
    scanf("%d", &student.rollno);
    getchar();

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter Percentage: ");
    scanf("%f", &student.percentage);

    fseek(file, 0, SEEK_END);
    fwrite(&student, sizeof(struct Student), 1, file);

    printf("Student record added successfully.\n");
}

void displayStudents(FILE *file) {
    struct Student student;
    int count = 0;

    rewind(file);
    printf("\n--- Student Records ---\n");

    while (fread(&student, sizeof(struct Student), 1, file)) {
        count++;
        printf("Roll Number: %d\n", student.rollno);
        printf("Name: %s\n", student.name);
        printf("Percentage: %.2f\n", student.percentage);
        printf("---------------------\n");
    }

    if (count == 0)
        printf("No records found.\n");
}

void updateStudent(FILE *file) {
    struct Student student;
    int rollno, found = 0;

    printf("\nEnter Roll Number of the student to update: ");
    scanf("%d", &rollno);
    getchar();

    rewind(file);

    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.rollno == rollno) {
            found = 1;

            printf("Record found.\n");

            printf("Enter new Name: ");
            fgets(student.name, sizeof(student.name), stdin);
            student.name[strcspn(student.name, "\n")] = '\0';

            printf("Enter new Percentage: ");
            scanf("%f", &student.percentage);

            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&student, sizeof(struct Student), 1, file);

            printf("Record updated successfully.\n");
            return;
        }
    }

    if (!found)
        printf("Record with Roll Number %d not found.\n", rollno);
}