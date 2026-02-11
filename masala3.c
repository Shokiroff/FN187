#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    int i, len, plus_count = 0;

    fgets(str, 256, stdin);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        if(str[i] == '+')
            plus_count++;
    }

    int new_len = len + plus_count * 2; 
    str[new_len] = '\0';

    for(i = len - 1; i >= 0; i--) {
        if(str[i] == '+') {
            str[--new_len] = '+';
            str[--new_len] = '+';
            str[--new_len] = '+';
        } else {
            str[--new_len] = str[i];
        }
    }

    printf("%s", str);
    return 0;
}
