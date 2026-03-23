#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool s(int n)
{
    if (n<=1)
    {
        return false;
    }
    for (int i = 2; i*i<= n ; i++)
    {
        if (n%i==0)
        {
            return false;
        }
       
    }
   return true;     
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
if(s(n))
{
    printf("The number is prime number ");
}
else
   {
    printf("The number is not a prime number");
   }
   return 0;
}