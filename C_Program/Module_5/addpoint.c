#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int *x,*y;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    x = &a;
    y = &b;
    printf("Sum : %d",*x+*y);
    return 0;

}