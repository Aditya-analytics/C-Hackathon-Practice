#include<stdio.h>
#include<conio.h>
int main()
{
    //Taking inputs
    int i,n;
    long fact=1;
    printf("Enter the factorial : ");                  
    scanf("%d",&n);

    //Make code for factorial using while loop
    i=1;
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial of given count is : %ld",fact);


return 0;

}