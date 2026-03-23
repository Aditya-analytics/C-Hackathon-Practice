#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter no. a: ");
    scanf("%d",&a);
    printf("Enter no. b: ");
    scanf("%d",&b);
    a>b?printf("%d is grater than %d",a,b):printf("%d is grater than %d",b,a);
    return 0;
}