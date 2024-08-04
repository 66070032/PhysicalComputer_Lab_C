#include<stdio.h>

int main() {
    int number, result = 0;
    while (number != -9) {
        scanf("%d", &number);
        if (number == -9) {
            break;
        }
        result += number;
    }
    printf("%d", result);
    return 0;
}