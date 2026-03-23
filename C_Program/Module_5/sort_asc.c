#include <stdio.h>
#include <conio.h>
int main() {
    int a[5], i, j, temp;

    // Input elements
    for (i = 0; i < 5; i++) {
        printf("Enter element no. %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Bubble Sort (Ascending Order)
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
