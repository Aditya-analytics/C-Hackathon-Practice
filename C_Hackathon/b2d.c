#include <stdio.h>

int bin_to_dec(int n){
    int dec = 0;
    int base = 1;

    while (n)
    {
        int last_digit = n % 10;
        n = n/10;

        dec += last_digit*base;

        base = base * 2;
    }
    return dec;
    
}

int main(){
    int n = 10;
    printf("Decimal : %d",bin_to_dec(n));
    return 0;
}