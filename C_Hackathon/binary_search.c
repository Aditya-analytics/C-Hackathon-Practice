#include <stdio.h>

int main(){
    int a[8] = {1,2,3,4,5,66,88,99};
    int n = sizeof(a)/sizeof(a[0]);
    int s = 0, e = n-1;
    int mid;
    int key = 99;
    int found = 0;

    while (s < e)
    {
        mid = (s+e)/2;

        if (a[mid] == key)
        {
            printf("Key found at %d",mid);
            found = 1;
            break;
        }
        else if (key > a[mid])
        {
            s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
    }
    if (found == 0)
    {
        printf("Key not found !");
    }
    return 0;
}