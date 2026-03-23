#include <stdio.h>

int nat(int n){
    if (n == 0) return 0;
    return n + nat(n-1);
}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("%d",nat(n));
    return 0;
}