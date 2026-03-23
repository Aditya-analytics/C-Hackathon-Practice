// 🥉 3. Reverse an Array (Q14)

#include <stdio.h>

void rev(int a[5],int n){
    int s = 0;
    int e = n-1;
    int temp;
    while (s < e)
    {
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;

        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

int main(){
   int a[5] = {1,2,9,4,5};
   int n = 5;
   rev(a,n);
   return 0;
}