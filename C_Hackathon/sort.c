#include <stdio.h>

int main(){
    int a[7] = {1,3,5,3,2,80,5};
    int temp;
    
    for (int i = 0; i < 7-1; i++)
    {
       for (int j = 0; j < 7-1-i; j++)
       {
         if (a[j] > a[j+1])
         {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
         } 
       }  
    }
    for (int i = 0; i < 7; i++)
    {
       printf(" %d",a[i]);
    }
    return 0;
}