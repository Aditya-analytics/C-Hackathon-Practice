#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>=50 && n<=100)
    {
        printf("Given number is in between 50 and 100");
    }
    else{
        printf("Given number is not in between 50 and 100");
    }
    return 0;
}