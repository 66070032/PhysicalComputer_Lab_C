#include<stdio.h>

int main() {
    int numbers;
    scanf("%d", &numbers);
    for (int i = 1; i <= numbers; i++) {
        if (i == numbers) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}