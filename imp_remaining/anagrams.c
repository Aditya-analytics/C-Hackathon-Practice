#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    int n1 = strlen(str1);
    int n2 = strlen(str2);

    // Length check
    if(n1 != n2) {
        printf("Not Anagram");
        return 0;
    }

    // Sort both strings
    for(int i = 0; i < n1-1; i++) {
        for(int j = i+1; j < n1; j++) {
            if(str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if(str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare
    for(int i = 0; i < n1; i++) {
        if(str1[i] != str2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}