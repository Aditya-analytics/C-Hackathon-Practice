#include <stdio.h>
#include <string.h>

// Usign strcat
// int main(){
//     char s1[1000] = "Aditya";
//     char s2[1000] = " Patil";
//     strcat(s1,s2);
//     printf("%s",s1);
//     return 0;
// }

// Manual concat
int main(){
    char s1[1000] = "Aditya";
    char s2[1000] = " Patil";
    char result[1000];

    int i=0, j=0;

    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        result[i] = s2[j];
        i++;
        j++;
    }

    result[i] = '\0';
    
    printf("%s\n",result);
    return 0;
}

// // More clean
// int main(){
//     char s1[1000] = "Aditya";
//     char s2[1000] = " Patil";
//     char result[1000];

//     int i=0;
//     for (int j = 0; s1[j] != '\0'; j++)
//     {
//         result[i++] = s1[j];
//     }
//     for (int j = 0; s2[j] != '\0'; j++)
//     {
//         result[i++] = s2[j];
//     }
//     result[i] = '\0';
    
//     printf("%s\n",result);
//     return 0;
// }