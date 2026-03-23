#include <stdio.h>


void rev(int a[5]){
    int l = 0,r = 5-1;
    int temp;
    
    while (l < r)
    {
        temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        l++;
        r--;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
    int a[5] = {1,9,9,7,6};
    rev(a);
    return 0;
}