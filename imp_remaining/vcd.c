#include <stdio.h>

int main(){
    char str[50000];
    printf("Enter string : ");
    scanf("%s",str);

    int v = 0, c = 0, d = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i]<= '9')
        {
            d++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i]>= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'||
                str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O'|| str[i] == 'U')
            {
                v++;
            }else{
                c++;
            }
        }
    }

    printf("Digits : %d\n",d);
    printf("Vowels : %d\n",v);
    printf("Consonants : %d",c);

    return 0;
}