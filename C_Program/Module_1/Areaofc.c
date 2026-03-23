#include<stdio.h>
#include<conio.h>
int main()
{
    float a,r,b,l,w;
    float pi = 3.14;

    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    a = pi*r*r;
    
    printf("Area : %.2f",a);
    printf("\nEnter the length of the rectangle : ");
    scanf("%f",&l);
    printf("\nEnter the width of the rectangle : ");
    scanf("%f",&w);
    b = l*w; 
    printf("Area : %.2f",b);
    return 0;
}