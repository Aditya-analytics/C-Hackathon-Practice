#include <stdio.h>

int main(){
    int a[7] = {1,3,5,3,2,80,5};
    int max = a[0];
    int min = a[0];
    
    for (int i = 0; i < 7; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
        }
        if (min >= a[i])
        {
            min = a[i];
        }
    }
    printf("%d\n",max);
    printf("%d",min);

    return 0;
}