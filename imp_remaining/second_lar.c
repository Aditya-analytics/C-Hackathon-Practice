#include <stdio.h>
#include <limits.h>

int main(){
    int a[5] = {1,4,2,7,8};
    int largest = a[0];
    int second = INT_MIN;

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
        
    }
    printf("largest : %d\n",largest);
    printf("Second largest : %d",second);

    return 0;
    
}