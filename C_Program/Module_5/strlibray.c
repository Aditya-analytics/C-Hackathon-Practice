#include <stdio.h>
#include <conio.h>
// Define a structure to hold book details
struct Library {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued; // 0 = Not issued, 1 = Issued
};

int main() {
    int i, n;

    // Ask user how many books to enter
    printf("Enter number of books: ");
    scanf("%d", &n);

    // Create array of Library structures
    struct Library books[n];

    // Input data for each book
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Accession Number: ");
        scanf("%d", &books[i].accessionNumber);

        getchar(); // Clear newline before reading strings
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Price: ");
        scanf("%f", &books[i].price);

        printf("Is the book issued? (1 = Yes, 0 = No): ");
        scanf("%d", &books[i].isIssued);
    }

    // Display book data
    printf("\n--- Book Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %dāāāā:\n", i + 1);
        printf("Accession Number: %d\n", books[i].accessionNumber);
        printf("Title: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Issued: %s\n", books[i].isIssued ? "Yes" : "No");
    }

    return 0;
}
āāāāā