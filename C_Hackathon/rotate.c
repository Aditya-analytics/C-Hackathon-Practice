#include <stdio.h>

void rev(int a[],int start,int end){
    int temp;
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

void rotate(int a[],int d,int n){
    rev(a,0,d-1); // first rotation elements reverse them
    rev(a,d,n-1); // remaining elements reverse them
    rev(a,0,n-1); //reverse complete array now

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int d = 2;

    rotate(a,d,n);
    return 0;

}