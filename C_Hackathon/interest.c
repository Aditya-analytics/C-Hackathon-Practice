#include <stdio.h>
#include <math.h>

int main(){
    double pa =1200,time=2,rate=5.4;
    double amount;
    amount = pa * (pow((1+rate/100),2));
    double CI = amount - pa;
     
    printf("Principle amount : %.2lf",CI);

    return 0;
}