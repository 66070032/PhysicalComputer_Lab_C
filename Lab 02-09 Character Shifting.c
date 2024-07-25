#include<stdio.h>

int main() {
    char str_1, str_2, str_3, str_4, str_5;
    scanf("%c\n%c\n%c\n%c\n%c", &str_1, &str_2, &str_3, &str_4, &str_5);
    printf("%c\n%c\n%c\n%c\n%c", str_1+1, str_2, str_3+1, str_4, str_5+1);
    return 0;
}