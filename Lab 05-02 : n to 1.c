#include<stdio.h>

int main() {
    int numbers;
    scanf("%d", &numbers);
    for (int i = numbers; i > 0; i--) {
        if (i == 1) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}