#include<stdio.h>
#include<conio.h>

int reversed(int n)
{
    int rev =0;
    while (n!=0)
    {
     int digit = n%10;
     rev =rev*10+digit;
     n=n/10;
    }
   return rev;
}
int main()
{
    int n = 1234;
    
    int reverse = reversed(n);
    printf("Original number : %d",n);
    printf("\nReversed number : %d",reverse);
    return 0;
}