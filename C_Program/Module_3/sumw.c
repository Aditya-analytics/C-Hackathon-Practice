#include<stdio.h>
#include<conio.h>
int main()
{
    int s=0;
    int i = 1;
    // while (i<=10)
    // {
    //     s = s+i;    
    //     i++;      
    // }   
    do
    {
        s=s+i;
        i++;
    } while (i<=10);
      
    
    
printf("Sum of first 10 natural numbers: %d",s);

return 0;

}