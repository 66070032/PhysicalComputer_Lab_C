#include<stdio.h>

int main() {
    char character;
    scanf("%c", &character);
    if ((int) character >= 97 && (int) character <= 122) {
        printf("%c", character - 32);
    } else if ((int) character >= 65 && (int) character <= 90) {
        printf("%c", character + 32);
    } else {
        printf("error");
    }
    return 0;
}