#include<stdio.h>
#include<conio.h>
int main()
{
    int i,next,n;
    int a=0,b=1;
    printf("Enter count for series : ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
       printf("%d ",a);
       next = a+b;
       a=b;
       b=next;
       
    }
    return 0;
}