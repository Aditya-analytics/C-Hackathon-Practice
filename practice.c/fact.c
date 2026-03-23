#include <stdio.h>

int fact(int n,int f){
    if(n==0){
        return f;
    }
    f *= n;
    return fact(n-1,f);
}


int main(){
    int n = 5;

    printf("Factorial : %d",fact(n,1));
    return 0;
}