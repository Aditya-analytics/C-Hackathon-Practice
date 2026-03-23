#include<stdio.h>
#include<conio.h>
int main()
{
    //Taking input
    int a,b,c;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);
    printf("Enter number c : ");
    scanf("%d",&c);

    //finding and printing grater number
    if(a>b && a>c)
    {
       printf("%d is greater than %d and %d",a,b,c);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater than %d and %d",b,a,c);
    }
    else if(c>b && a<c)
    {
        printf("%d is greater than %d and %d",c,b,a);
    }
    else if (a==b && a==c)
    {
        printf("All three numbers are equal");
    }

return 0;
}