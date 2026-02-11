#include <stdio.h>
#include <string.h>

void masala1(){
    long long n;
    int sum = 0;

    scanf("%lld", &n);

    for(; n > 0; n /= 10) {
        int raqam = n % 10;
        if(raqam % 2 != 0)
            sum += raqam * raqam;
    }

    printf("%d\n", sum);
}

void masala2(){
    printf("Masalani ishlay olmadim\n");
}

void masala3(){
    char str[256];
    int i, len, plus_count = 0;

    getchar();
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
}

void masala4(){
    printf("Masalani ishlay olmadim\n");
}

void masala5(){
    printf("Masalani ishlay olmadim\n");
}

void masala6(){

    FILE *in = fopen("Strings.txt", "r");

    if(in == NULL){
        printf("Strings.txt topilmadi!\n");
        return;
    }

    char soz[100];

    while(fgets(soz, 100, in)) {

        int len = strlen(soz);

        if(soz[len-1] == '\n'){
            soz[len-1] = '\0';
            len--;
        }

        int pal = 1;

        for(int i = 0; i < len/2; i++){
            if(soz[i] != soz[len-1-i]){
                pal = 0;
                break;
            }
        }

        if(pal)
            printf("%s\n", soz);
    }

    fclose(in);
}

int main(){

    int tanlov;

    printf("\n1 - masala");
    printf("\n2 - masala");
    printf("\n3 - masala");
    printf("\n4 - masala");
    printf("\n5 - masala");
    printf("\n6 - masala");

    printf("\n\nQaysi masalani tekshirmoqchisiz: ");
    scanf("%d", &tanlov);

    if(tanlov == 1) masala1();
    else if(tanlov == 2) masala2();
    else if(tanlov == 3) masala3();
    else if(tanlov == 4) masala4();
    else if(tanlov == 5) masala5();
    else if(tanlov == 6) masala6();
    else printf("Notogri tanlov!\n");

    return 0;
}
