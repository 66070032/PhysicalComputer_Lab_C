#include<stdio.h>

int main() {
    int numbers;
    scanf("%d", &numbers);
    if (numbers > 0) {
        for (int i = numbers; i >= 0; i--) {
            if (i == 0) {
                printf("%d", i);
            } else {
                printf("%d ", i);
            }
        }
    } else {
        for (int i = numbers; i <= 0; i++) {
            if (i == 0) {
                printf("%d", i);
            } else {
                printf("%d ", i);
            }
        }
    }
    return 0;
}