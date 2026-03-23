#include <stdio.h>

int main(){
    int a = 5,b = 5,c = 100;

    if (a == b && b == c)
    {
        printf("All no.s are equal !");
    }
    else if (a >= b && a >= c)
    {
        printf("%d is greatest",a);
    }
    else if (c >= b)
    {
        printf("%d is greatest",c);
    }
    else
    {
        printf("%d is greatest",b);
    }
    
    return 0;
    
}