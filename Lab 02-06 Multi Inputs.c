#include<stdio.h>

int main() {
    char str_1[30];
    char str_2[30];
    char str_3[30];
    char str_4[30];
    scanf("%s %s %s %s", str_1, str_2, str_3, str_4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", str_1, str_2, str_3, str_4);
    return 0;
}