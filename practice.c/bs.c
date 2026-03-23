// 🥈 2. Binary Search (Q17)

#include <stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int key = 5,mid;
    int found = 0;
    int s = 0, e = 5;

    while (s < e)
    {
        mid = (s + e)/2;

        if (key == a[mid])
        {
            printf("Key found at : %d",mid);
            found = 1;
            break;
        }
        else if (key > a[mid])
        {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    if (found == 0)
    {
        printf("Key not found !!!");
    }
    return 0;
}