#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i;
    int s =0;
    for (i = 0; i < 5; i++)
    {
        printf("enter the element no. %d : ",i+1);
        scanf("%d",&a[i]);
        s = s+a[i];
    }
    printf("\n");
    printf("Sum of elements : %d",s);
    return 0;
}