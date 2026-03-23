#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5;
    float b = 9.2;
    char c = '!';

    printf("Value of a : %d",a);
    printf("\nValue of b : %.2f",b);
    printf("\nValue of a : %c",c);
    printf("\nsize of a : %d",sizeof(a));
    printf("\nSize of b : %d",sizeof(b));
    printf("\nSize of c : %d",sizeof(c));

    return 0;
}