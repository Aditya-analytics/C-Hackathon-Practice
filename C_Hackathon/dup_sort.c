#include <stdio.h>

void dup(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] != a[i+1])
        {
            printf("%d ",a[i]);
        }
        
    } 
    printf("%d",a[n-1]);   
}

int main(){
    int a[7] = {1,2,2,3,4,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    dup(a,n);
    return 0; 
}