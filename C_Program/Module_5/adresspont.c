#include <stdio.h>
#include<conio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';
    int *x;float *y;char *z;
    // Display values
    printf("Values:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    x = &a;
    y = &b;
    z = &c;
    printf("\nAddress of a : %u",x);
    printf("\nAddress of b : %u",y);
    printf("\nAddress of c : %u",z);

    return 0;

}