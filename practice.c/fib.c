// 🏅 4. Factorial (Q9) 0 1 1 2 3 5 8 ...
#include <stdio.h>

int fact(int n,int prev1,int prev2){
    if (n == 0) return 0;
    if (n > 2)
    {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
        printf("%d ",current);
    }
    return fact(n-1,prev1,prev2);
}

int main(){
    int n = 3;
    if (n <= 1)
    {
        if (n == 1)
        {
            printf("%d",0);
            return 0;
        }
        else{
        printf("Enter value > 1");
        return 0;
        }
    }

    printf("%d %d ",0,1);
    fact(n,1,0);
    return 0;
}