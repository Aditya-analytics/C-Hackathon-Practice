#include <stdio.h>
#include <string.h>

void rev_str(char *str, int l, int r) {
    if (l >= r) {
        return;
    }
    
    // Swap
    char temp = str[l];
    str[l] = str[r];
    str[r] = temp;
    
    // Fixed: use l+1 and r-1
    rev_str(str, l + 1, r - 1);
}

int main() {
    char str[1001];
    printf("Enter : ");
    scanf("%s", str);
    int len = strlen(str);
    rev_str(str, 0, len - 1);
    printf("%s\n", str);
    return 0;
}