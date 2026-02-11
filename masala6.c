#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("Strings.txt", "r");
    char soz[100];

    while(fgets(soz, 100, in)) {
        int len = strlen(soz);
        if(soz[len-1] == '\n') {
            soz[len-1] = '\0';
            len--;
        }

        int pal = 1;

        for(int i = 0; i < len/2; i++) {
            if(soz[i] != soz[len-1-i]) {
                pal = 0;
                break;
            }
        }

        if(pal)
            printf("%s\n", soz);
    }

    fclose(in);
}
