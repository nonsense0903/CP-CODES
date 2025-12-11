#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int age;
    char gender[10];
    float salary;
};
int main() {
    struct Employee employees[5];
    int i;
        for (i = 0; i < 5; i++) {
        printf("Enter info for employee %d:\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
        printf("Age: ");
        scanf("%d", &employees[i].age);
        getchar();
        printf("Gender: ");
        fgets(employees[i].gender, sizeof(employees[i].gender), stdin);
        employees[i].gender[strcspn(employees[i].gender, "\n")] = '\0';
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        getchar();
        printf("\n");
    }
    printf("\n--- Employee Info ---\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\nAge: %d\nGender: %s\nSalary: %.2f\n\n",
               employees[i].name, employees[i].age,
               employees[i].gender, employees[i].salary);
    }
    printf("\n--- Employees with Salary above 50,000 ---\n");
    for (i = 0; i < 5; i++) {
        if (employees[i].salary > 50000) {
            printf("Name: %s\nAge: %d\nGender: %s\nSalary: %.2f\n\n",
                   employees[i].name, employees[i].age,
                   employees[i].gender, employees[i].salary);
        }
    }
    return 0;
}