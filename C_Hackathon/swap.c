#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    // Actual 
    printf("Actual Values : \na = %d b = %d\n",a,b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("Swapped : \na = %d b = %d",a,b);
    return 0;

}