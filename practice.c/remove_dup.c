// 🥇 1. Remove Duplicates from Sorted Array (Q16)

#include <stdio.h>
void remove_dup(int a[8],int n){
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
    int a[8] = {1,2,2,3,3,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    remove_dup(a,n);
    return 0;

}
