#include <stdio.h>

int main() {
    int numbers;
    scanf("%d", &numbers);
    for (int i = 1; i <= numbers; i++) {
        for (int j = i; j < numbers; j++) {
            printf(" ");
        }
        for (int j = 1; j < i; j++) {
            printf("*");
        }
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
