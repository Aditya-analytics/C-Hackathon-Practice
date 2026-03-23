#include <stdio.h>

int main(){
    int fact = 1,n = 4;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("%d",fact);

    return 0;
    
}