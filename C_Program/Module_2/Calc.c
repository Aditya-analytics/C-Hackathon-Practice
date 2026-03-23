#include<stdio.h>
#include<conio.h>
int main()
{ 
    //Taking input
    int n,x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);

    //Creating Menu
    printf("Menu :\nPress 1 for Addition \nPress 2 for substraction \nPress 3 for multiplication \nPress 4 for Division \nPress 5 for Remainder \nPress 6 for all operations in the menu \nPress 0 to exit");
    while (n!=0)
    {
    printf("\nEnter the option : ");
    scanf("%d",&n);
    //Making calc
    
    switch (n)
    {
    case 1:
        printf("Addition : %d",x+y);
        break;
    case 2:
        printf("Substration : %d",x-y);
        break;
    case 3:
        printf("Multiplication : %d",x*y);
        break;
    case 4:
        printf("Division : %d",x/y);
        break;
    case 5:
        printf("Remainder : %d",x%y);
        break;
    
    
    case 6:
    printf("Addition : %d",x+y);
    printf("\nSubstration : %d",x-y);
    printf("\nMultiplication : %d",x*y);
    printf("\nDivision : %d",x/y);
    printf("\nRemainder : %d",x%y);
    break;

    case 0:
    printf("Exited Successfully !");
    break;

    default:
    printf("Enter a valid option");
    break;
}
printf("\n");        
}    
return 0;
}