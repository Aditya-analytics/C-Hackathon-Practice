// 0 1 1 2 3 5 8 ...
#include <stdio.h>
void fib(int n){
    if (n < 1){
        printf("Invalid input : input number must be > 1");
        return;
    }

    int prev1 = 1;
    int prev2 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d",prev2);
        }
        else if (i == 2)
        {
            printf("% d",prev1);
        }
        else if (i > 2)
        {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf(" %d",curr);
        }
    }       
}
    
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Fibonacci series : ");
    fib(n);
    return 0;
}