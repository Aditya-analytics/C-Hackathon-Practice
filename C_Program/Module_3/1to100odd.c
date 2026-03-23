#include<stdio.h>
#include<conio.h>
int main()
{
    int o;
    for (int o = 0; o < 101; o++)
    {
        if (o%2!=0)          
        {
            printf("%d",o);
        }
        printf("\n");
    }
    return 0;
}