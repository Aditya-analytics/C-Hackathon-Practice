#include <stdio.h>
#include <conio.h>
// Define the structure to hold employee details
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[10]; // Array of 10 employees
    int i;

    // Accept details of 10 employees
    printf("Enter details of 10 employees:\n");
    for (i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);

        getchar(); // Clear newline left in input buffer
        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display all employee details
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s", emp[i].name); // No need for \n — fgets keeps it
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
