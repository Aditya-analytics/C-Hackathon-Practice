#include <stdio.h>
#include <string.h>
int main(){
    char str[1001];
    printf("Enter string : "); // madam
    scanf("%s",str);
    int ispali =  1;
    int len = strlen(str); // 5/2 = 2 

    for (int i = 0; i < len/2; i++) // < 2 : 1 = a
    {
        if (str[i] != str[len-1-i]) // a != str[3]()
        {
            ispali = 0;
            break;
        }  
    }
    printf("Is palindrome ? : %s", ispali ? "Yes": "No");
    return 0;
}