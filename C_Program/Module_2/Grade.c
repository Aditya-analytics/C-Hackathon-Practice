#include<stdio.h>
#include<conio.h>
int main()
{
    int g;
    printf("Enter your percentage : ");
    scanf("%d",&g); 
    if(g>=90 && g<=100)
    {
        printf("Grade A");
    }
    else if(g>=80 && g<90)
    {
       printf("Grade B");
    }
    else if(g>=70 && g<80)
    {
        printf("Grade C");
    }
    else if(g>=60 && g<70)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail or Invalid input");
    }
    return 0;
}