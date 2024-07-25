#include<stdio.h>

int main() {
    char str[3];
    scanf("%s", str);
    printf("*****\n");
    printf("*-*-*\n");
    printf("*%c%c%c*\n", str[0], str[1], str[2]);
    printf("*-*-*\n");
    printf("*****");
    
    return 0;
}